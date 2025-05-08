#include <stdio.h>

int main(){
    //dados das cartas variaveis simples char, float e int.
    char nome [20] = "JOGADORES";
    char Carta [20] = "AA";
    char Estado [20] = "Sergipe";
    char Cidade [20] = "Aracaju";
    float Area = 50.000;
    float Pib = 100.000; 
    int populacao = 100000;
    int Turismo = 8;
//dados da segunda carta, alterando o nome de cada item 
    char Cart [20] = "BA";
    char Estad [20] = "Bahia";
    char Cidad [20] = "Salvador";
    float Are = 200.000;
    float Pi = 300.000;
    int populaca = 400000;
    int Turism = 10;

//Cartas da jogadarora coletando os dados das linhas 6 a 12
//printf coleta valores correspodentes a primeira carta
    printf("%s, mostrem suas cartas!\n", nome);
    printf("\nANA\n");
    printf("\nCarta: %s\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Area: %f\n", Area);
    printf("PIB: %f\n", Pib);
    printf("População: %d\n", populacao);
    printf("Turismo: %d\n", Turismo);


    //Cartas da jogadarora coletando os dados das linhas 14 a 20
//printf coleta valores correspodentes a segunda carta
    printf("\nCLARA\n");
    printf("\nCarta: %s\n", Cart);
    printf("Estado: %s\n", Estad);
    printf("Cidade: %s\n", Cidad);
    printf("Area: %f\n", Are);
    printf("PIB: %f\n", Pi);
    printf("População: %d\n", populaca);
    printf("Turismo: %d\n", Turism);
        



}