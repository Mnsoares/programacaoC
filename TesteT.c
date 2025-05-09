#include <stdio.h>

int main(){
    char nome [20] = "JOGADORES";
    char Carta [20] = "A1";
    char Estado [20] = "Sergipe";
    char Cidade [20] = "Aracaju";
    float Area = 50.000;
    float Pib = 100.000; 
    int populacao = 100000;
    int Turismo = 8;
    float Densidade =  5622.24;
    float PibPerCapita = 44532.91;

    char Cart [20] = "B1";
    char Estad [20] = "Bahia";
    char Cidad [20] = "Salvador";
    float Are = 200.000;
    float Pi = 300.000;
    int populaca = 400000;
    int Turism = 10;
    float Densidad = 8102.47;
    float PibPerCapit = 56724.32;


    printf("%s, mostrem suas cartas!\n", nome);
    printf("\nANA\n");
    printf("\nCarta: %s\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Area: %f\n", Area);
    printf("PIB: %f\n", Pib);
    printf("População: %d\n", populacao);
    printf("Turismo: %d\n", Turismo);


    printf("\nCLARA\n");
    printf("\nCarta: %s\n", Cart);
    printf("Estado: %s\n", Estad);
    printf("Cidade: %s\n", Cidad);
    printf("Area: %f\n", Are);
    printf("PIB: %f\n", Pi);
    printf("População: %d\n", populaca);
    printf("Turismo: %d\n", Turism);
        
    return 0;



}