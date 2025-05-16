#include <stdio.h>

int main () {

    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i= %d, j = %d \n", i, j);
} 


    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    }


     // imprimir apenas numeros impar

    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}









   