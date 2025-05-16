#include <stdio.h>

void recursivo (int numero){
    if (numero > 0)
    {
        printf("%d \n", numero);

        recursivo(numero - 1);
    }
    
}

int main () {
    int quantidade = 20;

    printf("Contagem Regressiva....\n");
    recursivo(quantidade = 20);




return 0;
}