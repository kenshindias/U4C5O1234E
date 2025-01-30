# U4C5O1234E - Atividade 2: Temporizador de Um Disparo (Botão e LEDs)

Este repositório contém a implementação de um **sistema de temporização com disparo único** utilizando um botão para controlar LEDs no **Raspberry Pi Pico W**. O código foi desenvolvido em **C** com o **Pico SDK** e testado no **Visual Studio Code** e no **simulador Wokwi**.

## 📂 Estrutura do Repositório
```
📂 U4C5O1234E_2
 ├── CMakeLists.txt           # Arquivo de configuração para compilação
 ├── U4C5O1234E_2.c           # Código-fonte do temporizador de um disparo
 ├── diagram.json             # Diagrama do circuito
 ├── pico_sdk_import.cmake    # Configuração do Pico SDK
 ├── wokwi.toml               # Arquivo de configuração para o Wokwi
 └── README.md                # Documentação da atividade
```

---

## 📌 Descrição da Atividade
O objetivo desta atividade é criar um **sistema de temporização de um disparo (one-shot)** que controla LEDs utilizando um botão.

### 🎛️ Componentes Utilizados
- **Raspberry Pi Pico W**
- **3 LEDs:** Azul, Vermelho e Verde
- **1 Botão (Pushbutton)**
- **3 Resistores**

### 🔧 Configuração dos GPIOs
- **Azul:** GPIO **11**
- **Vermelho:** GPIO **12**
- **Verde:** GPIO **13**
- **Botão:** GPIO **10**

### 📜 Funcionamento
1. **Pressionar o botão:** Liga todos os LEDs.
2. Após **3 segundos:** Apaga o LED Azul.
3. Após mais **3 segundos:** Apaga o LED Vermelho.
4. Após mais **3 segundos:** Apaga o LED Verde.
5. O botão **só pode ser pressionado novamente após todos os LEDs desligarem**.

### ▶️ Execução
1. Clone o repositório:
   ```sh
   git clone https://github.com/kenshindias/U4C5O1234E.git
   ```
2. Acesse a pasta da atividade:
   ```sh
   cd U4C5O1234E/U4C5O1234E_2
   ```
3. Compile e rode o código usando o **Pico SDK**:
   ```sh
   mkdir build && cd build
   cmake ..
   make
   ```
4. Carregue o arquivo `.uf2` gerado no Raspberry Pi Pico.

---

## 📌 Requisitos
- **Pico SDK** instalado
- **Visual Studio Code** configurado para Raspberry Pi Pico
- **Simulador Wokwi** (opcional para testes)

## 📄 Licença
Este projeto está licenciado sob a **MIT License**.

📌 Desenvolvido por [**kenshindias**](https://github.com/kenshindias) 🚀
