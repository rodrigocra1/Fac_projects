#include <stdio.h>

int main(void)
{
    // Declaracao de variaves para uso nos loops
    int casas;
    int peca;

    // Print menu interativo para o usuario escolher a peça a ser movimentada
    printf("Selecione a peça para fazero movimento:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1: // Caso que movimenta a torre.
    {
        for (int i = 0; i < 5; i++) // Uso do loop for enquanto i for menor que 5
        {
            printf("Direita\n");
        }
        break;
    }
    case 2: // Case do movimento do bispo
    {
        casas = 0;  // Estabelecendo a variavel que sofrerá acrescimo
        do
        {
            printf("Direita, Cima\n");
            casas++;
        } while (casas < 5);
        break;
    }
    case 3: // Case do movimento da rainha
    {
        casas = 0;
        while (casas < 8)
        {
            printf("Esquerda\n");
            casas++;
        }
        
    }
    default: // Default impede entrada de input invalido.
    {
        printf("Selecione uma opção válida!");
        break;
    }
        return 0;
    }
}