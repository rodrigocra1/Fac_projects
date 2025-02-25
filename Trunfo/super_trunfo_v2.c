#include <stdio.h>

/* Essa versão pode ser considerada mais simples;
ela imprime cada carta logo após o input do usuário. */

void criar_carta(); // função de criar carta
void print_carta(); // função de imprimir carta
void criar_carta2(); // função de criar carta2

// Definindo variáveis carta 1
char estado, codigo_carta[50], cidade[100];
int populacao, pt_turisticos;
float area, pib;
int carta = 1;
// Definindo variáveis carta 2
char estado2, codigo_carta2[50], cidade2[50];
int populacao2, pt_turisticos2;
float area2, pib2;
int carta2 = 2;

int main(void)
{
        //Carta 1
        criar_carta();
        printf("\n");

        //Carta 2
        criar_carta2();
        printf("\n");

        // Print Cartas
        print_carta();
        printf("\n");


    return 0;
}

void criar_carta(void)
{
    printf("Digite os dados para a carta %d: \n", carta);

    // Pedindo input do usuário
    printf("Código do estado: ");
    scanf(" %c", &estado);

    printf("Código da carta: ");
    scanf("%3s", codigo_carta);
    getchar();

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade) , stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt_turisticos);
}

void print_carta(void)
{
    printf("Carta: %d\n", carta); // imprime o número da carta

    // imprime resultados dos inputs:

    printf("Código do estado: %c\n", estado);
    printf("Código da carta: %3s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pt_turisticos);
    printf("\n");
    
    printf("Carta: %d\n", carta2); // imprime o número da carta

    // imprime resultados dos inputs
    printf("Código do estado: %c\n", estado2);
    printf("Código da carta: %3s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pt_turisticos2);
}
void criar_carta2(void)
{
    printf("Digite os dados para a carta %d: \n", carta2);

    // Pedindo input do usuário
    printf("Código do estado: ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%3s", codigo_carta2);
    getchar();

    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2) , stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt_turisticos2);
}
