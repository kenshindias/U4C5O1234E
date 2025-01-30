# Projeto: Temporizadores no Raspberry Pi Pico W

Este repositório contém a implementação de dois exercícios práticos utilizando o **Raspberry Pi Pico W**, abordando **temporizadores periódicos** e **temporizadores de um disparo (one-shot)**. Os códigos foram desenvolvidos em **C** com o **Pico SDK**, utilizando o **Visual Studio Code** e o **simulador Wokwi**.

## Estrutura do Repositório

```
📂 U4C5O1234E
 ├── 📂 U4C5O1234E_1          # Atividade 1: Temporizador Periódico (Semáforo)
 │    ├── CMakeLists.txt       # Arquivo de configuração para compilação
 │    ├── U4C5O1234E_1.c       # Código-fonte do semáforo
 │    ├── diagram.json         # Diagrama do circuito
 │    ├── pico_sdk_import.cmake # Configuração do Pico SDK
 │    ├── wokwi.toml           # Arquivo de configuração para o Wokwi
 │    └── README.md            # Documentação da atividade
 ├── 📂 U4C5O1234E_2          # Atividade 2: Temporizador de Um Disparo (Botão e LEDs)
 │    ├── CMakeLists.txt       # Arquivo de configuração para compilação
 │    ├── U4C5O1234E_2.c       # Código-fonte do temporizador de um disparo
 │    ├── diagram.json         # Diagrama do circuito
 │    ├── pico_sdk_import.cmake # Configuração do Pico SDK
 │    ├── wokwi.toml           # Arquivo de configuração para o Wokwi
 │    └── README.md            # Documentação da atividade
 └── README.md                # Documentação geral do repositório
```

---

## 🟢 Atividade 1: Temporizador Periódico (Semáforo)
**Local:** `U4C5O1234E/U4C5O1234E_1`

### 📌 Descrição
O objetivo desta atividade é criar um **semáforo funcional** utilizando **temporizadores periódicos**. O semáforo alterna entre **vermelho, amarelo e verde** a cada **3 segundos**.

### 🚦 Componentes Utilizados
- Raspberry Pi Pico W
- 3 LEDs (Vermelho, Amarelo e Verde)
- 3 Resistores

### 🔧 Configuração dos GPIOs
- **Vermelho:** GPIO **11**
- **Amarelo:** GPIO **12**
- **Verde:** GPIO **13**

### 📜 Funcionamento
- Inicia no **vermelho** → **amarelo** → **verde**
- A cada **3 segundos**, troca de cor
- A cada **1 segundo**, exibe uma mensagem pela porta serial

---

## 🔴 Atividade 2: Temporizador de Um Disparo (Botão e LEDs)
**Local:** `U4C5O1234E/U4C5O1234E_2`

### 📌 Descrição
Esta atividade implementa um **temporizador de um disparo (one-shot)** para controlar **LEDs via botão**.

### 🎛️ Componentes Utilizados
- Raspberry Pi Pico W
- 3 LEDs (Azul, Vermelho e Verde)
- 1 Botão (Pushbutton)
- 3 Resistores

### 🔧 Configuração dos GPIOs
- **Azul:** GPIO **11**
- **Vermelho:** GPIO **12**
- **Verde:** GPIO **13**
- **Botão:** GPIO **10**

### 📜 Funcionamento
- **Pressionar o botão:** Liga todos os LEDs
- **Após 3 segundos:** Apaga o LED Azul
- **Após mais 3 segundos:** Apaga o LED Vermelho
- **Após mais 3 segundos:** Apaga o LED Verde
- O botão **só pode ser pressionado novamente após todos os LEDs desligarem**

---

## 📌 Requisitos
- **Pico SDK** instalado
- **Visual Studio Code** configurado para desenvolvimento com Raspberry Pi Pico
- **Simulador Wokwi** (opcional para testes)

## 📄 Licença
Este projeto está licenciado sob a **MIT License**.

📌 Desenvolvido por [**kenshindias**](https://github.com/kenshindias) 🚀
