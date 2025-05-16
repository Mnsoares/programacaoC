#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros (água)

    // Inserindo um navio na linha 4 ocupando as colunas 2, 3 e 4
    int linhaNavio = 3; // Índices começam do zero, então linha 3 representa a linha 4
    int inicioColuna = 1; // Índice 1 representa a segunda coluna

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavio][inicioColuna + i] = 3; // Insere o navio
    }

    // Exibindo o tabuleiro
    printf("\n*** TABULEIRO BATALHA NAVAL ***\n\n");
    
    // Exibir cabeçalho das colunas
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i+1); // Exibir número da linha
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 3)
                printf("3 "); // Exibir o navio
            else
                printf("0 "); // Água
        }
        printf("\n");
    }

    return 0;
}