#include <stdio.h>

void input_dados(void);
void calculo_media(void); 

float nota1, nota2, nota3, media;
int main(void)
{
    input_dados();
    calculo_media();

    return 0;
}
void input_dados(void)
{
    //Pede input das 3 notas
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("\n");
}

void calculo_media(void)
{
    //Somas as notas e divide, imprimindo a média.
    media = (nota1 + nota2 + nota3) / 3;
    printf("A média é de %.1f", media);
    printf("\n");
}