#include <stdio.h>
// codigo operadores logicos E (&&);
int main () {

     int A = 10, B = -5;

     if (A > 0 && B > 0)
     {
        printf("Os números são Positivos! \n");
     } else {
        printf("Um dos números é Negativo!\n");
     }
     
     //Codigo operadores logicos OU (||)

     int AB = -10, BA = -5;

      if (AB > 0 || BA > 0)
     {
        printf("Um dos números é Positivos! \n");
     } else {
        printf("Um dos números é Negativo!\n");
     }

     //codigo operadores logico NOT (!) NÃO

     int ABC = 2;

     if (!ABC)
     {
      printf("A Variavel a é ZERO!\n");
     }
    else {
      printf("A variavel é diferente de ZERO!\n");
    }    

    int X = -10;

    if (!(X > 0))
    {
      printf("A Variavel é Negativa!\n");
    }
    else {
      printf("A Variavel é Positiva!\n");
    }
}
