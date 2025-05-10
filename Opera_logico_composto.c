#include <stdio.h>

int main () {

    int numero1;
    int numero2;

    numero1 = 10;
    numero2 = 50;

    if(numero1 > numero2) {

    printf("O número1 é maior que o numero2! \n");

    }
    else {

    printf("O número1 é menor que o número2! \n");

    }

// CODIGO PARA VERIFICAR SE O NÚMERO É PAR OU IMPAR

    int numero = 8;

    if (numero % 2 == 0)
    {
        printf("O número é Par! \n");
    }
    else 
    {

    printf("O número é Impar \n");
    
    }
    
//CODIGO PARA VERIFICAR A TEMPERATURA 

float temperatura = 55.0;

if (temperatura >= 30.0)
{

    printf("Está Calor! \n");

}
else 
{

    printf("Não está Calor! \n");

}

//CODIGO PARA VERIFICAR A NOTA 


int nota = 85;

if (nota >= 60)
{

    printf("Parabéns, Você passou! \n"); //Verdadeiro

}
else
{

    printf("Infelizmente, Você não passou! \n"); //Falso

}


//CODIGO PARA VERIFICAR SE É MAIOR DE IDADE

int idade = 17;

if (idade >=18)
{
    printf("Você é maior de idade! \n");

}
else
{

    printf("Você é menor de idade! \n");

}










}