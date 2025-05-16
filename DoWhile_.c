#include <stdio.h>

int main() {
    int contador = 0;
    char nome[100] = "Diagonal"; // Assume um nome com no máximo 100 caracteres

    do {
        printf("%s\n", nome); // Imprime o nome
        contador++; // Incrementa o contador
    } while (contador < 5); // Condição para parar de imprimir

    return 0;
}