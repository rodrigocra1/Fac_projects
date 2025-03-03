#include <stdio.h>

int main(void)
{
char produto1[30] = "Produto A";
char produto2[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoque_minimoA = 500;
unsigned int estoque_minimoB = 2500;

double valor_totalA;
double valor_totalB;

int resultadoA, resultadoB;

// Exibir informações dos produtos
printf("Produto %s tem estoque %u e o valor unitário é de R$%.2f\n", produto1, estoqueA, valorA);
printf("Produto %s tem estoque %u e o vaoor unitário é de R$%.2f\n", produto2, estoqueB, valorB);

// Comparação com o valor mínimo de estoque

resultadoA = estoqueA > estoque_minimoA;
resultadoB = estoqueB > estoque_minimoB;

printf("O produto %s tem estoque mínimo %d\n", produto1, resultadoA);
printf("O produto %s tem estoque mínimo %d\n", produto2, resultadoB);


// Comparação valores totais

printf("O valor total de A (R$%.2lf) é maior que o valor total de B (R$%.2lf): %d \n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));

}
