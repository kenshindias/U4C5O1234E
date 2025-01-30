# U4C5O1234E - Atividade 1: Temporizador Periódico (Semáforo)

Este repositório contém a implementação de um **semáforo funcional** utilizando um **temporizador periódico** no **Raspberry Pi Pico W**. O código foi desenvolvido em **C** com o **Pico SDK** e testado no **Visual Studio Code** e no **simulador Wokwi**.

## 📂 Estrutura do Repositório
```
📂 U4C5O1234E_1
 ├── CMakeLists.txt           # Arquivo de configuração para compilação
 ├── U4C5O1234E_1.c           # Código-fonte do semáforo
 ├── diagram.json             # Diagrama do circuito
 ├── pico_sdk_import.cmake    # Configuração do Pico SDK
 ├── wokwi.toml               # Arquivo de configuração para o Wokwi
 └── README.md                # Documentação da atividade
```

---

## 📌 Descrição da Atividade
O objetivo desta atividade é criar um **sistema de semáforo** que altera suas cores automaticamente a cada **3 segundos**. Além disso, o sistema imprime mensagens na **porta serial** a cada **1 segundo**.

### 🚦 Componentes Utilizados
- **Raspberry Pi Pico W**
- **3 LEDs:** Vermelho, Amarelo e Verde
- **3 Resistores**

### 🔧 Configuração dos GPIOs
- **Vermelho:** GPIO **11**
- **Amarelo:** GPIO **12**
- **Verde:** GPIO **13**

### 📜 Funcionamento
1. O sistema inicia com o LED **vermelho** aceso.
2. Após **3 segundos**, alterna para o **amarelo**.
3. Após mais **3 segundos**, alterna para o **verde**.
4. O ciclo se repete continuamente.
5. Uma mensagem é impressa na **porta serial** a cada **1 segundo**.

### ▶️ Execução
1. Clone o repositório:
   ```sh
   git clone https://github.com/kenshindias/U4C5O1234E.git
   ```
2. Acesse a pasta da atividade:
   ```sh
   cd U4C5O1234E/U4C5O1234E_1
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
