#include <stdio.h>

int main()
{
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade:  ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o número da sua matrícula: ");
    scanf("%d", &matricula);

    printf("\n");

    printf("Idade: %d anos \n", idade);
    printf("Sua altura: %.2f \n", altura);
    printf("Seu nome: %s \n", nome);
    printf("Sua matrícula: %d \n", matricula);
}