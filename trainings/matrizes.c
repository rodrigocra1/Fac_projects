#include <stdio.h>

int vetor[5] = {1, 2, 3, 4, 5};
int soma = 0;

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        soma += vetor[i];
        printf("A soma é %d\n", soma);
    }
}

// int main(void)
// {
//     int matriz1[2][2] = {{1, 2}, {3, 4}};
//     int matriz2[2][2] = {{5, 6}, {7, 8}};
//     int soma_matriz[2][2];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             soma_matriz[i][j] = matriz1[i][j] + matriz2[i][j];
//             printf("soma_matriz[%d][%d] = %d\n", i, j, soma_matriz[i][j]);
//         }
//     }

// }

// int main(void)
// {
//     int matriz[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             matriz[i][j] = i + j;

//             printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
//         }
//     }
// }

// int main(void)
// {
//     int vetor[5];

//     for (int i = 0; i < 5; i++)
//     {
//         vetor[i] = i * 2;
//         printf("vetor [%d] = %d\n", i, vetor[i]);
//     }
// }
