#include <stdio.h>

int print_board(void); // funcao de imprimir tabuleiro

const int BOARD_SIZE = 11; // constante do tamanho do tabuleiro

// Array do tabuleiro
char *tabuleiro[11][11] = {
    {"  ", " A", " B", " C", " D", " E", " F", " G", " H", " I", " J\n"},
    {" 1", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 2", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 3", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 4", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 5", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 6", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 7", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 8", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {" 9", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
    {"10", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"}};

// arrays dos navios
char *navio1[3] = {" 3", " 3", " 3"};
char *navio2[3] = {" 3", " 3", " 3"};

int main(void)
{
    
    printf("\n---=== BATALHA NAVAL ===---\n\n"); // imprime cabecalho
    print_board(); // imprime tabuleiro

    int action;  
    printf("\nDigite 1 para posicionar os navios: "); // menu para iniciar
    printf("\n");
    scanf("%i", &action);

    switch (action)   // switch para evitar input invalido
    {
    case 1:
    {
        for (int i = 0; i < 3; i++)
        {
        tabuleiro[3][3 + i] = navio1[i];
        tabuleiro[7 + i][8] = navio2[i];
        }

        print_board();
        break;
    }

    default:
    {
        printf("Você deve digitar 1 para continuar.");
        break;
    }
    }
}

int print_board(void) // funcao imprimir tabuleiro
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%s", tabuleiro[i][j]);
        }
    }
}