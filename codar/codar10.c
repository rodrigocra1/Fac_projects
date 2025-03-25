#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main(void)
{
    int matriz[LINHA][COLUNA];
    int target;
    int found = 0;
    int soma = 1;

    printf("Digite o número target: \n");
    scanf("%i", &target);

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("O valor %d foi encontrado no indice [%d][%d]\n", target, i, j);
                found = 1;
                break;
            }
        }
    }

    // Busca condicional do elemento alvo

}