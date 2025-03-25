#include <stdio.h>
#include <ctype.h>


// Array do tabuleiro
char *tabuleiro[10][10];
int setup_board(void); // funcao que cria o tabuleiroboard(void); // funcao que cria o tabuleiro
int print_board(void); // funcao de imprimir tabuleiro
int hability_cone(void); // habilidade do cone

const int BOARD_SIZE = 10; 
char letras[11];

// arrays dos navios
char *navio1[3] = {" 3", " 3", " 3"};
char *navio2[3] = {" 3", " 3", " 3"};
char *navio3[3] = {" 3", " 3", " 3"};
char *navio4[3] = {" 3", " 3", " 3"};

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
        for (int i = 0; i < 3; i++) // coloca os navios da vertical e horizontal
        {
            tabuleiro[3][3 + i] = navio1[i];
            tabuleiro[7 + i][8] = navio2[i];
        }

        for (int i = 0; i < 3; i++) // coloca os navios da diagonal
        {
            tabuleiro[8 - i][0 + i] = navio3[i];
            tabuleiro[0 + i][6 + i] = navio4[i];
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

    int menu_habilidade;
    printf("Digite o número correspondete a habilidade que voçê quer utilizar:\n");
    printf("1. Cone\n");
    printf("2. Cruza\n");
    printf("3. Octaedro\n");
    scanf("%d", &menu_habilidade);

    switch (menu_habilidade)
    {
        case 1:
        {
            hability_cone();
            print_board();
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
int hability_cone(void)
{
    char *cone = " 5";
    int input_i;
    char input_j;
    
    printf("Digite as coordenadas da habilidade:\nLetra (A-J): ");
    scanf(" %c", &input_j);
    printf("Número (1-10): ");
    scanf("%i", &input_i);
    
     // converte input_j para maiuscula
     input_j = toupper(input_j) - 'A'; // converte letras em numeros
     input_i -= 1; // converte 1-10 para 0-9

     if (input_i < 0 || input_i >= BOARD_SIZE || input_j < 0 || input_j >= BOARD_SIZE) // garantir que o input esteja nos limites do tabuleiro
    {
        printf("Coordenadas inválidas!\n");
        return -1;
    }
    
    for (int i = input_i; i < BOARD_SIZE; i++) 
    {
        int left = input_j - (i - input_i);  
        int right = input_j + (i - input_i); 

        if (left >= 0) 
            tabuleiro[i][left] = cone;

        if (right < BOARD_SIZE) 
            tabuleiro[i][right] = cone;
    }
    return 0;
}