#include <stdio.h>


int height;
char text;

int main(void)
{
    printf("Digite o texto\n");
    scanf("%c", &text);

    printf("Digite o tamanho:\n");
    scanf("%i", &height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%s", text);
            
        }
        printf("\n");
    }
 
    return 0;
}