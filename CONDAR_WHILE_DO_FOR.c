#include <stdio.h>

int main () {
//EXEMPLO DE WHILE
    int i = 0;

    while (i <= 5){

     if(i % 2 != 0)
     {
        printf("O número %d é impar \n!", i);
     }
        
    i++;

    }
// EXEMPLO DE DO WHILE    
int numero;

//do {

 //   printf("Digite um número par para sair do programa...\n");
 //   scanf("%d", &numero);
    
  //  if (numero % 2 == 0){
 //       printf("%d é par!\n", numero);
  //  } else {
  //      printf("%d é impar!\n", numero);
  //  }

//} while (numero % 2 != 0);
//{
 //   printf("Você digitou um número par, saindo do programa....\n");
//}

//EXEMPLO DE FOR

int Numero, I; 
printf("Digite um numero para calcular a tabuada: \n");
scanf("%d", &Numero);
for (I = 0; I <= 10; I++) 
{
   printf("%d X %d = %d \n", I, Numero, I * Numero);
}



return 0;



}