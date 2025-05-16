#include <stdio.h>
// Desenho de um padrão
int main() {
    int n = 5; // altura do triângulo
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

//Tabuada de multiplicação 

     for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
   

    return 0;

}