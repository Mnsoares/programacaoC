#include <stdio.h>

int main() {
    int index;

    const char * nomesAlunos[3][3] = {
        {"Aluno 0", "PT: 30", "Mat: 60"},
        {"Aluno 1", "PT: 90", "Mat: 30"},
        {"Aluno 2", "PT: 70", "Mat: 80"}
    };

    printf("Digite o número do aluno para verificar a nota (0 a 2):\n");
    scanf("%d", &index);

    if (index >= 0 && index < 3) {
        printf("As notas de %s são: %s, %s.\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    } else {
        printf("Número de aluno inválido!\n");
    }

    return 0;
}