#include <stdio.h>

void MovimentoRainha(char *nome, int contador) { // poderia utilizar o mesmo codigo para movimentar o cavalo L
    if (contador <= 0) {
        return; // Condição de base: quando o contador for 0, a função para
    }

    printf("%s", nome); // Imprime o nome
    MovimentoRainha(nome, contador - 1); // Chamada recursiva, reduzindo o contador
}

int main() {
     char *nome1 = "Baixo\n"; // movimento a ser impresso
     char *nome2 = "Esquerda "; // movimento a ser impresso

    
    MovimentoRainha(nome1, 5); // Definição de vezes que o numero sera impresso
   
    MovimentoRainha(nome2, 2); // Definição de vezes que o numero sera impresso
    printf("\n");

    return 0;
}