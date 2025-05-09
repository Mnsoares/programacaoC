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

//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA DEBSIDADE POPUPLACIONAL = POPULAÇÃO / AREA

    float Densidade = populacao / Area;  //Densidade real 3 314,5

//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA PIB PER CAPITA = PIB / POPULAÇÃO 
    
    float PibPerCapita = Pib / populacao; //PIB per Cap real 24 735,91

    char Cart [20] = "B1";
    char Estad [20] = "Bahia";
    char Cidad [20] = "Salvador";
    float Are = 693442.89;
    float pib = 62954487.49;
    int populaca = 2417678.02;
    int Turism = 10;

//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA DEBSIDADE POPUPLACIONAL = POPULAÇÃO / AREA

    float Densidad = populaca / Are;  //Densidade real 3 486,5

//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA PIB PER CAPITA = PIB / POPULAÇÃO 

    float PibPerCapit = pib/ populaca;  //PIB per Cap real 21 706,06

//Cartas da jogadarora coletando os dados das linhas 6 a 11
//printf coleta valores correspodentes a primeira carta
    printf("%s, mostrem suas cartas!\n", nome);
    printf("\nANA\n");
    printf("\nCarta: %s\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Area: %f km²\n", Area);
    printf("PIB: %f reais\n", Pib);
    printf("População: %d\n", populacao);
    printf("Turismo: %d\n", Turismo);
//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE DENSIDADE;
    printf("Densidade Populacional: %f hab/km²\n", Densidade);
//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE PIB PER CAPITA;
    printf("PIB Per Capita: %f reais\n", PibPerCapita);

//Cartas da jogadarora coletando os dados das linhas 21 a 27
//printf coleta valores correspodentes a segunda carta
    printf("\nCLARA\n");
    printf("\nCarta: %s\n", Cart);
    printf("Estado: %s\n", Estad);
    printf("Cidade: %s\n", Cidad);
    printf("Area: %f km²\n", Are);
    printf("PIB: %f reais\n", pib);
    printf("População: %d\n", populaca);
    printf("Turismo: %d\n", Turism);
//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE DENSIDADE;
    printf("Densidade Populacional: %f hab/km²\n", Densidad);
//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE PIB PER CAPITA;
    printf("PIB Per Capita: %f reais\n", PibPerCapit);
        
    return 0;



}