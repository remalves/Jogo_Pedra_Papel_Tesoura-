# 🎮 Rock, Paper, Scissors Game in C

---

## 🌎 Language Versions

<details>
<summary>🇧🇷 Versão em Português</summary>

---

# 🎮 Jogo Pedra, Papel e Tesoura em C

Projeto desenvolvido em **C** que implementa o clássico jogo **Pedra–Papel–Tesoura** entre o usuário e o computador.

O programa utiliza geração de números aleatórios para simular a escolha do computador e permanece em execução até que o usuário escolha **0 – Encerrar**.

---

## 📌 Funcionalidades

### 🎮 Menu Interativo

- 1️⃣ Pedra  
- 2️⃣ Papel  
- 3️⃣ Tesoura  
- 0️⃣ Encerrar o jogo  

### ⚙️ Recursos Implementados

- Geração aleatória utilizando:
  - `srand()`
  - `rand()`
  - `time()`
- Exibição do resultado:
  - 🟢 Vitória
  - 🔴 Derrota
  - 🟡 Empate
- Placar final com:
  - Total de vitórias do jogador
  - Total de vitórias do computador
  - Total de empates
- Mensagem final informando o vencedor geral

---

## 🛠️ Tecnologias Utilizadas

**Linguagem:** C  

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
```

---

## ▶️ Como Compilar (GCC - Windows)

```bash
gcc jogo.c -o jogo
jogo.exe
```

---

## 🧠 Conceitos Aplicados

- Estruturas de repetição (`do...while`)
- Estruturas condicionais (`if/else`)
- Geração de números aleatórios
- Manipulação de strings (`strcpy`)
- Controle de placar com variáveis contadoras

---

</details>

---

<details>
<summary>🇺🇸 English Version</summary>

---

# 🎮 Rock, Paper, Scissors Game in C

Project developed in **C language** that implements the classic **Rock–Paper–Scissors** game between the user and the computer.

The program uses random number generation to simulate the computer’s choice and keeps running until the user selects **0 – Exit**.

---

## 📌 Features

### 🎮 Interactive Menu

- 1️⃣ Rock  
- 2️⃣ Paper  
- 3️⃣ Scissors  
- 0️⃣ Exit the game  

### ⚙️ Implemented Features

- Random computer choice using:
  - `srand()`
  - `rand()`
  - `time()`
- Round result display:
  - 🟢 Win
  - 🔴 Loss
  - 🟡 Draw
- Final scoreboard:
  - Total player wins
  - Total computer wins
  - Total draws
- Final message announcing the overall winner

---

## 🛠️ Technologies Used

**Language:** C  

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
```

---

## ▶️ How to Compile (GCC - Windows)

```bash
gcc game.c -o game
game.exe
```

---

## 🧠 Concepts Applied

- Loop structures (`do...while`)
- Conditional statements (`if/else`)
- Random number generation
- String manipulation (`strcpy`)
- Score tracking using counters

---

</details>

---

## 👩‍💻 Author

**Rebeca Martins Alves**  
Software Engineering Student
