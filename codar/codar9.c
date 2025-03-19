#include <stdio.h>

int main(void)
{
    int index;
    char *nomes_alunos[4][4] = {
        {"Cabecalho","Cabecalho","Cabecalho"},
        {"Aluno 1", "Pt: 30", "Mat: 90"},
        {"Aluno 2", "Pt: 60", "Mat: 60"},
        {"Aluno 3", "Pt: 90", "Mat: 30"}
    };


        printf("Digite o número do aluno que queira ver as notas:\n");
        printf("1. Aluno 1\n");
        printf("2. Aluno 2\n");
        printf("3. Aluno 3\n");
        scanf("%d", &index);

        printf("As notas do %s são: %s, %s. \n", nomes_alunos[index][0], nomes_alunos[index][1], nomes_alunos[index][2]);
        


    return 0;
}