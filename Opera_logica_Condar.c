#include <stdio.h>

int main () {

    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura >= 30){
        printf("Temperatura Está Alta! \n");
    }else{
        printf("Temperatura Está Dentro Dos Parâmetros! \n");
    }
    
    if(umidade >= 50){
        printf("Umidade Elevada! \n");
    }else{
        printf("Umidade Está Dentro Dos Parâmentros! \n");
    }

if (estoque < estoqueminimo){
    printf("Estoque Abaixo do Minimo! \n");
}else{
    printf("Estoque Normal! \n");
}
















}