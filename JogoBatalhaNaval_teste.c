#include <stdio.h>

int main () {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; // Colunas do tabuleiro
    printf("\n*** TABULEIRO BATALHA NAVAL ***\n\n  ");

    // Exibir cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // Exibir tabuleiro com coordenadas numéricas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i+1); // Exibir número da linha
        for (int j = 0; j < 10; j++) {
            printf("0 "); // Representa a água
        }
        printf("\n");
    }

    return 0;
}