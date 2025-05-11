#include <stdio.h>

int main (){ 

int numero;

printf("Digite Um Número: \n");
scanf("%d", &numero);

if (numero > 0){
    if (numero % 2 == 0)
    {
        printf("Número Par! \n");
    } else{
        printf("Número Impar!\n");
    }
    
    printf("Positivo!\n");
    } else if (numero == 0){
     printf("Número É Zero! \n");
    }else
     {
    printf("Negativo!\n");
    }
}