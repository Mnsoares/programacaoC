#include <stdio.h>

int main (){

    int numero1, numero2;

    numero1 = 10;
    numero2 = 5;

    if (numero1 > numero2)
    {
        printf("numero1 é maior que numero2!\n");
    }
    
        printf("FORA IF\n");



//IDADE



    int idade = 37;
    
    if (idade >= 18)
    {
        printf("Você é maior de idade!\n");
        printf("Fora IF\n");
    }


    //TEMPERATURA

    float temperatura = 32.0;


    if (temperatura >= 30.0)
    {
       printf("Está calor!\n");
    }


    //NOTA


    int nota = 65;

    if (nota >=60)
    {
        printf("Parabéns, você passou!  %d\n", nota);
    }
    
    //IDADE

    int idade1 = 37;
    int idade2 = 30;

    if (idade1 > idade2)
    {
        printf ("Pessoa1 %d anos, é mais velha que Pessoa2 %d anos! \n", idade1, idade2);
    }


    //RESULTADO DO NUMERO

    int numero = 5, resultado;

    resultado = numero % 2;
    printf("A variavel resultado é: %d \n", resultado);

    if (numero % 2 == 0)
    {
    printf("O numero é par \n");
    
    
    }


    //ESTOQUE

    int estoque = 4;

    if (estoque < 5)
    {
        printf("Estoque baixo! \n");
    }
    
    
    
    
    



   /*  
   if (condição) {     //abre a chave   
              //cloco de codigo a ser execultado
   comando1
   comando2
} //fecha a chave
              */








}

