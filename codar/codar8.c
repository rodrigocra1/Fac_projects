#include <stdio.h>

void recursivo(int numero);

int main(void)
{
    int quant = 10;
    recursivo(quant);

    return 0;
}

void recursivo(int numero)
{
    if (numero > 0)
    {
        recursivo(numero - 1);
        printf("%i\n", numero);
        
        
    }
}