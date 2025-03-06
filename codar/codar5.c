#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(int pc_number, int user_number, int comparision);

int main(void)
{
    int opcao;
    int pc_number, user_number, comparision;

    // print menu
    while (1)
    {
        printf("\n--- Menu principal ---\n\n");
        printf("Digite o número corresponte às opções abaixo:\n");
        printf("1. Iniciar jogo\n");
        printf("2. Ver regras\n");
        printf("3. Sair\n\n");
        printf("Opção: ");
        scanf("%i", &opcao);

        // switch function
        char play_again;
        switch (opcao)
        {
        case 1:
            srand(time(0));
            pc_number = rand() % 100;
            printf("Digite um número de 0 a 100: \n\n");
            scanf("%i", &user_number);

            printf("\nEscolha um método de comparação:\n");
            printf("1. Maior que\n");
            printf("2. Menor que\n");
            printf("3. Igual a\n");
            scanf("%i", &comparision);

            game(pc_number, user_number, comparision);
            
            printf("\nJogar novamente? (y/n)\n");
            scanf(" %c", &play_again);

            if (play_again == 'n')
            {
                return 0;
            }
            else
            {
                continue;
            }

        case 2:
        {
            printf("Regras do jogo: digite um número e tente adivinhar se o número do PC será maior, menor o igual ao seu!\n\nJogar agora? (y/n)\n");
            scanf(" %c", &play_again);

            if (play_again == 'n')
            {
                return 0;
            }
            break;
        }
        case 3:
        {
            return 0;
        }

        default:
        {
            printf("Opção inválida.\n\n");
            return 0;
        }
        }
    }
}

void game(int pc_number, int user_number, int comparision)
{
    switch (comparision)
    {
    case 1:
    {
        if (user_number > pc_number)
        {
            printf("Numero do PC: %i\n", pc_number);
            printf("Você ganhou!\n");
            break;
        }
        else
        {
            printf("Numero do PC: %i\n", pc_number);
            printf("Você perdeu!\n");
            break;
        }
    }

    case 2:
    {
        if (user_number < pc_number)
        {
            printf("Numero do PC: %i\n", pc_number);
            printf("Você ganhou!\n");
            break;
        }
        else
        {
            printf("Numero do PC: %i\n", pc_number);
            printf("Você perdeu!\n");
            break;
        }
    }

    case 3:
    {
        if (user_number == pc_number)
        {
            printf("Numero do PC: %i\n", pc_number);
            printf("Você ganhou!\n");
            break;
        }
        else
        {
            printf("Numero do PC: %i\n", pc_number);
            printf("Você perdeu!\n");
            break;
        }
    }
}
}