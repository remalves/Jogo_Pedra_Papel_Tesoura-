#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");
    SetConsoleOutputCP(CP_UTF8);

    int opcao, minhasVitorias = 0, VitoriasPc = 0, empates = 0;
    char x[8];
    char Pc[8];
    int i = 0;
    srand(time(NULL));
    printf("\nJogo Pedra-Papel-Tesoura:\n");

    do
    {

        if (i == 0)
            printf("Escolha uma opção: \n");
        else
            printf("\nEscolha uma opção:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("0 - Encerrar jogo\n");
        printf("Opção = ");
        scanf("%d", &opcao);

        if (opcao == 1)
            strcpy(x, "Pedra");
        if (opcao == 2)
            strcpy(x, "Papel");
        if (opcao == 3)
            strcpy(x, "Tesoura");

        int num = rand() % 3 + 1;
        if (num == 1)
            strcpy(Pc, "Pedra");
        if (num == 2)
            strcpy(Pc, "Papel");
        if (num == 3)
            strcpy(Pc, "Tesoura");

        if (opcao == 1)
        {
            printf("\nPC: ");
            printf("%s", Pc);
            printf("\nVocê: ");
            printf("%s", x);
            if (num == 1)
            {
                printf("\nEmpate");
                empates++;
            }
            else if (num == 2)
            {
                printf("\nDerrota");
                VitoriasPc++;
            }
            else
            {
                printf("\nVitória");
                minhasVitorias++;
            }
        }
        else if (opcao == 2)
        {
            printf("\nPC: ");
            printf("%s", Pc);
            printf("\nVocê: ");
            printf("%s", x);
            if (num == 2)
            {
                printf("\nEmpate");
                empates++;
            }
            else if (num == 3)
            {
                printf("\nDerrota");
                VitoriasPc++;
            }
            else
            {
                printf("\nVitória");
                minhasVitorias++;
            }
        }
        else if (opcao == 3)
        {
            printf("\nPC: ");
            printf("%s", Pc);
            printf("\nVocê: ");
            printf("%s", x);
            if (num == 3)
            {
                printf("\nEmpate");
                empates++;
            }
            else if (num == 1)
            {
                printf("\nDerrota");
                VitoriasPc++;
            }
            else
            {
                printf("\nVitória");
                minhasVitorias++;
            }
        }
        else if (opcao == 0)
        {
            if(i>1)
                printf("\nEncerrando o jogo ...\n");
        }
        else
        {
            printf("\nOpção inválida.");
            printf("\nDigite um numero entre 1 - 3.\n");
        }

        i++;
    } while (opcao != 0);

    if (i > 1)
    {
        printf("\n--------PLACAR FINAL DO JOGO:----------\n");
        printf("Suas vitórias = %d\n", minhasVitorias);
        printf("Vitórias do PC = %d\n", VitoriasPc);
        printf("Empates = %d\n", empates);

        if (minhasVitorias > VitoriasPc)
        {
            printf("!!!Parabéns, você venceu o PC!!!!\n");
        }
        else
        {
            printf("Poxa, não foi dessa vez :( \n");
            printf("Jogue novamente! :) \n");
        }
    }
    else
    {
        printf("\nHmm ... acho que não houve jogadas\n");
    }

    return 0;
}
