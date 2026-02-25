🎮 Jogo Pedra, Papel e Tesoura em C

Projeto desenvolvido em linguagem C que implementa o clássico jogo Pedra–Papel–Tesoura entre o usuário e o computador.

O programa utiliza geração de números aleatórios para simular a escolha do computador e mantém o jogo em execução até que o usuário escolha encerrar.

📌 Funcionalidades

Menu interativo com as opções:

1️⃣ Pedra

2️⃣ Papel

3️⃣ Tesoura

0️⃣ Encerrar o jogo

Geração aleatória da jogada do computador usando:

srand()

rand()

time()

Exibição do resultado da rodada:

Vitória

Derrota

Empate

Placar final ao encerrar o jogo:

Total de vitórias do jogador

Total de vitórias do computador

Total de empates

Mensagem final informando o vencedor geral

🛠️ Tecnologias e Bibliotecas Utilizadas

Linguagem: C

Bibliotecas:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
🎲 Como funciona a lógica do jogo

O jogador escolhe uma opção pelo menu.

O computador gera um número aleatório entre 1 e 3:

int num = rand() % 3 + 1;

Cada número representa:

1 → Pedra

2 → Papel

3 → Tesoura

O programa compara as escolhas e determina o resultado.

O jogo continua em loop (do while) até o usuário digitar 0.

▶️ Como compilar e executar
🔹 Usando GCC (Windows)
gcc jogo.c -o jogo
jogo.exe

🧠 Conceitos aplicados
Estruturas de repetição (do...while)
Estruturas condicionais (if/else)
Geração de números aleatórios
Manipulação de strings com strcpy
Controle de placar com variáveis contadoras
Configuração de codificação UTF-8 no Windows
