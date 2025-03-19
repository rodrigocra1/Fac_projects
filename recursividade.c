#include <stdio.h>

void recursivo(int numero);

int main(void)
{
    int quant = 10;
    recursivo(quant);
}

void recursivo(int numero)
{
    if (numero > 0)
    {
        printf("%i\n", numero);
        
        recursivo(numero - 1);
    }
}