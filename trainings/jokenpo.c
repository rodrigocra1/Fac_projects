#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void bot_play(int *choice_bot);
void game_rules(int choice_player, int choice_bot);

int main(void)
{
    int choice_player, choice_bot;
    srand(time(0));

    while (1)
    {
        printf("\n\n --== MEGA BLASTER JOKENPÔ ==--\n\n");
        printf("- Faça sua jogada:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("4. Sair\n");
        printf("\nEscolha um número: ");

        char input[10];
        scanf("%s", input);

        if (sscanf(input, "%d", &choice_player) != 1)
        {
            printf("Entrada inválida! Por favor, insira um número.\n");
            continue;
        }
        if (choice_player == 4)
        {
            printf("Saindo do jogo\n");
            break;
        }
        if (choice_player > 4)
        {
            printf("Escolha inválida!");
            continue;
        }

        bot_play(&choice_bot);
        game_rules(choice_player, choice_bot);

        int replay;
        printf("\nJogar novamente?\n");
        printf("1. Sim\n2. Não\n");
        scanf("%i", &replay);

        if (replay == 2)
        {
            printf("Saindo do jogo\n");
            return 0;
        }
    }
}

void bot_play(int *choice_bot)
{
    *choice_bot = (rand() % 3) + 1;
}

void game_rules(int choice_player, int choice_bot)
{
    const char *choices[] = {"Pedra", "Papel", "Tesoura"};

    if (choice_player == choice_bot)
    {
        printf("Você escolheu %s.\nO computador escolheu %s.", choices[choice_player - 1], choices[choice_bot - 1]);
        printf("\n\nEmpate!\n");
    }
    else if ((choice_player == 1 && choice_bot == 3) || (choice_player == 2 && choice_bot == 1) || (choice_player == 3 && choice_bot == 2))
    {
        printf("Você escolheu %s.\nO computador escolheu %s.", choices[choice_player - 1], choices[choice_bot - 1]);
        printf("\n\nVocê ganhou!\n");
    }
    else
    {
        printf("Você escolheu %s.\nO computador escolheu %s.", choices[choice_player - 1], choices[choice_bot - 1]);
        printf("\n\nVocê perdeu!\n");
    }
}