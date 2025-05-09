#include <stdio.h>

int main(){
    char nome [20] = "JOGADORES";
    char Carta [20] = "A1";
    char Estado [20] = "Sergipe";
    char Cidade [20] = "Aracaju";
    float Area = 181.857;
    float Pib = 16447105.18; 
    int populacao = 602.757;
    int Turismo = 8;
    float Densidade =  5622.24;  //Densidade real 3 314,5
    float PibPerCapita = 44532.91; //PIB per Cap real 24 735,91

    char Cart [20] = "B1";
    char Estad [20] = "Bahia";
    char Cidad [20] = "Salvador";
    float Are = 693.442;
    float Pi = 62954487.49;
    int populaca = 2417678;
    int Turism = 10;
    float Densidad = populaca / Are;  //Densidade real 3 486,5
    float PibPerCapit;  //PIB per Cap real 21 706,06


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
    printf("Densidade Populacional: %.2f\n", Densidad);
        
    return 0;



}