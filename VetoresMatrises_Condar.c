#include <stdio.h>

int main () {
    int index;

    const char * nomesAlunos[3][3] = {
         {"Aluno 0", "PT: 30", "Mat: 60"},
         {"Aluno 1", "PT: 90", "Mat: 30"},
         {"Aluno 2", "PT: 70", "Mat: 80"}
    };

    printf("Digite o Numero do Aluno Para Verificar A Nota: \n");
    printf("Para o Aluno 0, Digite 0\n");
    printf("Para o Aluno 1, Digite 1\n");
    printf("Para o Aluno 2, Digite 2\n");

    scanf("%d", &index);

    printf("A Nota Do %s São: %s , %s ...\n", nomesAlunos[index][0], nomesAlunos [index][1],nomesAlunos[index][2]);


return 0;

}