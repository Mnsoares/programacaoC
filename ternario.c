#include <stdio.h>

int main () {
    int idade = 16;
    int resultado;
    int temperatura = 60;
    int Resultado;

//exemplo de ternario
    idade >= 18 ? printf ("Você é maior de idade! \n") : printf ("Você é menor de idade! \n");

//exemplo como if

  resultado = idade >= 16 ? 1 : 0 ;

  if (resultado == 1)
  {
    printf ("Você é maior de idade! \n");
  }else{
    printf ("Você é menor de idade! \n");
  }

  //exemplo com temperatura  ternario

  temperatura > 30 ? printf ("Está Calor! \n") : printf ("Está Frio!\n");

  //exemplo com If
    Resultado = temperatura > 30 ? 1 : 0;
  if (Resultado == 1)
  {
   printf ("Está Calor! \n");
  }else{
    printf ("Está Frio!\n");
  }

  // exemplo ternario para comparar numero 

  int num1 = 40, num2 = 20;
  int maior;

  num1 > num2 ? (maior = num1) : (maior = num2);

  printf("O número maior é: %d\n", maior);

if (num1 > num2)
{
  printf("O número maior é: %d\n", num1);
}else{
 printf("O número maior é: %d\n", num2);
}









}
