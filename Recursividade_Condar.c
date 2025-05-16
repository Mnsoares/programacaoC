#include <stdio.h>

void recursivo (int numero){
   if (numero > 0)
   {

    printf("%d \n", numero); // imprimindo na ordem decrecente, se quiser imprimer na ordem crecente so inverter com o recusivo
    recursivo(numero - 1); // colocando a linha recursivo acima do printe ele imprime na ordem crescente 
   }
}
int main () {

    int quantidade = 10;

    printf("Contagem Regressiva... \n");
    recursivo(quantidade); 



}


