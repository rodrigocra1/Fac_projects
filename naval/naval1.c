#include <stdio.h>

int setup_board(void); // funcao que cria o tabuleiro
int print_board(void); // funcao de imprimir tabuleiro

const int BOARD_SIZE = 10; // constante do tamanho do tabuleiro

// Array do tabuleiro
char *tabuleiro[10][10];
char letras[11];

// arrays dos navios
char *navio1[3] = {" 3", " 3", " 3"};
char *navio2[3] = {" 3", " 3", " 3"};

int main(void)
{
   
    setup_board();

    printf("\n---=== BATALHA NAVAL ===---\n\n"); // imprime cabecalho
    print_board();                               // imprime tabuleiro

    int action;
    printf("\nDigite 1 para posicionar os navios: "); // menu para iniciar
    printf("\n");
    scanf("%i", &action);

    switch (action) // switch para evitar input invalido
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
int setup_board(void)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        letras[1 + i] = 'A' + i;
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            tabuleiro[i][j] = " 0";
        }
    }
    letras[0] = 32;

}
int print_board(void) // funcao imprimir tabuleiro
{
    // Coordenadas horizontais 
    for (int i = 0; i < BOARD_SIZE + 1; i++)
    {
        printf(" %c", letras[i]);
    }
    printf("\n");

    // Tabuleiro e Coord. verticais
    int number[10];
    for (int i = 0; i < (BOARD_SIZE - 1); i++)
    {  
        number[i] = i + 1;
        printf(" %i", number[i]);
        
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%s", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Imprimir última linha (para alinhamento perfeito)
    printf("10");
    for (int i = 0; i < BOARD_SIZE; i++)
    {  
        printf("%s", tabuleiro[9][i]);
    }
    printf("\n");
}

// {
//     {"  ", " A", " B", " C", " D", " E", " F", " G", " H", " I", " J\n"},
//     {" 1", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 2", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 3", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 4", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 5", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 6", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 7", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 8", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {" 9", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"},
//     {"10", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0", " 0\n"}};