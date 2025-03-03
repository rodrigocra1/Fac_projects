#include <stdio.h>

float temp, umid;
unsigned int estoque, estoqueMinimo = 1000;

void user_inputs(void);

int main(void)
{
    user_inputs();

    if (temp > 30)
    {
        printf("A temperatura está alta.\n");
    }
    else
    {
        printf("Temperatura dentro dos padrões.\n");
    }
    
    if (umid > 50)
    {
        printf("Umidade está alta.\n");
    }
    else
    {
        printf("Umidade normal\n");
    }

    if (estoque < estoqueMinimo) 
    {
        printf("Estoque abaixo do minimo\n");
    }
    else
    {
        printf("Estoque normal\n");
    }

    return 0;

}

void user_inputs(void)
{
    printf("Entre com a temperatura: ");
    scanf("%f", &temp);

    printf("Entre com a umidade: ");
    scanf("%f", &umid);

    printf("Entre com o estoque: ");
    scanf("%u", &estoque);
}