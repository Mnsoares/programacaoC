#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros (água)

    // Inserindo o primeiro navio na linha 4 ocupando as colunas B, C e D
    int linhaNavio1 = 3; // Índices começam em 0
    int inicioColuna1 = 1; // Índice 1 representa a coluna B

    for (int i = 0; i < 3; i++) { tabuleiro[linhaNavio1][inicioColuna1 + i] = 3;} // Insere o navio

    // Inserindo o segundo navio na coluna B, ocupando as linhas 7, 8 e 9
    int colunaNavio2 = 1; // Índice 1 representa a coluna B

    for (int i = 6; i < 9; i++) { // Índices 6, 7 e 8 correspondem às linhas 7, 8 e 9
        tabuleiro[i][colunaNavio2] = 3; // Insere o segundo navio
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
                printf("3 "); // Primeiro navio
            else if (tabuleiro[i][j] == 4)
                printf("4 "); // Segundo navio
            else
                printf("0 "); // Água
        }
        printf("\n");
    }

    return 0;
}