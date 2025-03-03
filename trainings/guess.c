#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int opcao;
    int secret_number, palpite;

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
        secret_number = rand() % 10;
        printf("Digite um número de 0 a 9\n\n");
        scanf("%i", &palpite);

            if (secret_number == palpite)
            {
                printf("\nVocê acertou! Miserávi!\n\n");
                printf("Jogar novamente (y/n): ");
                scanf(" %c", &play_again);

                if (play_again == 'n')
                {
                    return 0;
                } 
            }   
            else
            {
                printf("\nVocê errou!\nO número secreto era o %i!\n\nTentar novamente? (y/n) ", secret_number);
                scanf(" %c", &play_again);

                if (play_again == 'n')
                {
                    return 0;
                }

            }
            break;

        case 2:
        {
            printf("Regras do jogo: Tente adivinhar o número dando um palpite de 0 a 9\n\nJogar agora? (y/n)\n");
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
