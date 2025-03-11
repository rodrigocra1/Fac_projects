#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    int multiply, i;
    printf("Digite o número para tabuada:");
    scanf("%i", &multiply);

    for (int i = 0; i <= 10; i++)
    {
        printf("%i x %i = %i \n", i, multiply, i * multiply);
    }
    return 0;

}
    
    
//     int numero;
//     do
//     {
//         printf("Digite um número par para sair do programa...\n");
//         scanf("%i", &numero);
        

//         if (numero % 2 ==0)
//         {
//             printf("Numero %i é par!\n", numero);
        
//         }
//         else
//         {
//             printf("%i é impar!\n", numero);
//         }
        
//     } while (numero % 2 != 0);

//     printf("Saindo...\n");
       
// }



// int main(void)
// {
//     int i = 0;

//     while (i <= 10)
//     {
//         if (i % 2 == 0)
//         {
//             printf("O número %i é par!\n", i);
//         }
//         i++;
//     }
// }