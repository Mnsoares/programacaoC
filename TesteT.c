#include <stdio.h>

int main(){
    char nome [20] = "JOGADORES";
    char Carta [20] = "A1";
    char Estado [20] = "Sergipe";
    char Cidade [20] = "Aracaju";
    float Area = 181857.67;
    float Pib = 16447105.18; 
    int populacao = 602757.23;
    int Turismo = 8;
    float Densidade = populacao / Area;  //Densidade real 3 314,5
    float PibPerCapita = Pib / populacao; //PIB per Cap real 24 735,91

    char Cart [20] = "B1";
    char Estad [20] = "Bahia";
    char Cidad [20] = "Salvador";
    float Are = 693442.89;
    float pib = 62954487.49;
    int populaca = 2417678.02;
    int Turism = 10;
    float Densidad = populaca / Are;  //Densidade real 3 486,5
    float PibPerCapit = pib/ populaca;  //PIB per Cap real 21 706,06


    printf("%s, mostrem suas cartas!\n", nome);
    printf("\nANA\n");
    printf("\nCarta: %s\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Area: %f km²\n", Area);
    printf("PIB: %f reais\n", Pib);
    printf("População: %d\n", populacao);
    printf("Turismo: %d\n", Turismo);
    printf("Densidade Populacional: %f hab/km²\n", Densidade);
    printf("PIB Per Capita: %f reais\n", PibPerCapita);

    printf("\nCLARA\n");
    printf("\nCarta: %s\n", Cart);
    printf("Estado: %s\n", Estad);
    printf("Cidade: %s\n", Cidad);
    printf("Area: %f km²\n", Are);
    printf("PIB: %f reais\n", pib);
    printf("População: %d\n", populaca);
    printf("Turismo: %d\n", Turism);
    printf("Densidade Populacional: %f hab/km²\n", Densidad);
    printf("PIB Per Capita: %f reais\n", PibPerCapit);
        
    return 0;



}