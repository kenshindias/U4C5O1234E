#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/timer.h"

#define BLUE_LED 11    // GPIO para o LED Azul
#define RED_LED 12     // GPIO para o LED Vermelho
#define GREEN_LED 13   // GPIO para o LED Verde
#define BUTTON 5       // GPIO para o botão

volatile bool leds_active = false;

// Callback para desligar LEDs de forma sequencial
int64_t turn_off_callback(alarm_id_t id, void *user_data) {
    static int step = 0;
    switch (step) {
        case 0:
            gpio_put(BLUE_LED, 0);
            step++;
            add_alarm_in_ms(3000, turn_off_callback, NULL, false);
            break;
        case 1:
            gpio_put(RED_LED, 0);
            step++;
            add_alarm_in_ms(3000, turn_off_callback, NULL, false);
            break;
        case 2:
            gpio_put(GREEN_LED, 0);
            leds_active = false;
            step = 0;
            break;
    }
    return 0;
}

// Callback para detectar clique no botão e ativar LEDs
void button_callback(uint gpio, uint32_t events) {
    if (!leds_active) {
        leds_active = true;
        gpio_put(BLUE_LED, 1);
        gpio_put(RED_LED, 1);
        gpio_put(GREEN_LED, 1);
        add_alarm_in_ms(3000, turn_off_callback, NULL, false);
    }
}

int main() {
    stdio_init_all();
    
    // Configuração dos GPIOs
    gpio_init(BLUE_LED);
    gpio_init(RED_LED);
    gpio_init(GREEN_LED);
    gpio_init(BUTTON);
    gpio_set_dir(BLUE_LED, GPIO_OUT);
    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_set_dir(GREEN_LED, GPIO_OUT);
    gpio_set_dir(BUTTON, GPIO_IN);
    gpio_pull_up(BUTTON);
    
    // Configuração da interrupção do botão
    gpio_set_irq_enabled_with_callback(BUTTON, GPIO_IRQ_EDGE_FALL, true, &button_callback);
    
    while (1) {
        sleep_ms(100); // Pequeno delay para evitar processamento desnecessário
    }
    return 0;
}
