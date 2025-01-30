#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/timer.h"

#define RED_LED 11     // GPIO para o LED Vermelho
#define YELLOW_LED 12  // GPIO para o LED Amarelo
#define GREEN_LED 13   // GPIO para o LED Verde

volatile int state = 0; // Estado atual do semáforo

bool repeating_timer_callback(struct repeating_timer *t) {
    // Alterna entre os estados do semáforo
    switch (state) {
        case 0: // Vermelho
            gpio_put(RED_LED, 1);
            gpio_put(YELLOW_LED, 0);
            gpio_put(GREEN_LED, 0);
            state = 1;
            break;
        case 1: // Amarelo
            gpio_put(RED_LED, 0);
            gpio_put(YELLOW_LED, 1);
            gpio_put(GREEN_LED, 0);
            state = 2;
            break;
        case 2: // Verde
            gpio_put(RED_LED, 0);
            gpio_put(YELLOW_LED, 0);
            gpio_put(GREEN_LED, 1);
            state = 0;
            break;
    }
    return true; // Continua repetindo o temporizador
}

int main() {
    stdio_init_all();
    
    // Configuração dos GPIOs
    gpio_init(RED_LED);
    gpio_init(YELLOW_LED);
    gpio_init(GREEN_LED);
    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_set_dir(YELLOW_LED, GPIO_OUT);
    gpio_set_dir(GREEN_LED, GPIO_OUT);
    
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer); // Temporizador de 3 segundos
    
    while (1) {
        printf("Semáforo funcionando...\n");
        sleep_ms(1000); // Mensagem a cada 1 segundo
    }
    return 0;
}
