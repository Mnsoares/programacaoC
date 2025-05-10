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
    float Densidade = populacao / Area;  
//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA PIB PER CAPITA = PIB / POPULAÇÃO 
    float PibPerCapita = Pib / populacao; 
//SUPER PODER CALCULO DAS AREA
    float SuperPoder = Area + Pib + populacao + PibPerCapita + Turismo - Densidade;
//COMPARAÇÃO DAS CARTAS, VENCEU RESULTADO = 1, PERDEU RESULTADO = 0
        

    char Cart [20] = "B1";
    char Estad [20] = "Bahia";
    char Cidad [20] = "Salvador";
    float Are = 693442.89;
    float pib = 62954487.49;
    int populaca = 2417678.02;
    int Turism = 10;

//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA DEBSIDADE POPUPLACIONAL = POPULAÇÃO / AREA
    float Densidad = populaca / Are;  
//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA PIB PER CAPITA = PIB / POPULAÇÃO 
    float PibPerCapit = pib/ populaca;  
//SUPER PODER CALCULO DAS AREA
    float SuperPode = Are + pib + populaca + PibPerCapit + Turism - Densidad;
    

//Cartas da jogadarora coletando os dados das linhas 6 a 11
//printf coleta valores correspodentes a primeira carta
    printf("%s, mostrem suas cartas!\n", nome);
    printf("\nANA\n");
    printf("\nCarta: %s\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Area: %f km² Venceu:%d\n", Area, Area > Are);
    printf("PIB: %f reais Venceu:%d\n", Pib, Pib > Pib);
    printf("População: %d Venceu:%d\n", populacao, populacao > populaca);
    printf("Turismo: %d Venceu:%d\n", Turismo, Turismo > Turism);
    
    

//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE DENSIDADE;
    printf("Densidade Populacional: %f hab/km² Venceu:%d\n", Densidade, Densidade > Densidad);
//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE PIB PER CAPITA;
    printf("PIB Per Capita: %f reais Venceu:%d\n", PibPerCapita, PibPerCapita > PibPerCapit);
//SUPER PODER = SOMA DE POPULAÇÃO, ÁREA, PIB, PIB PER CAPITA E DENSIDADE POPULACIONAL INVERTIDA E PONTOS TURISTICO;    
    printf("Super Poder: %.2f Venceu:%d\n", SuperPoder, SuperPoder > SuperPode);

//Cartas da jogadarora coletando os dados das linhas 21 a 27
//printf coleta valores correspodentes a segunda carta

    printf("\nCLARA\n");
    printf("\nCarta: %s\n", Cart);
    printf("Estado: %s\n", Estad);
    printf("Cidade: %s\n", Cidad);
    printf("Area: %f km² Venceu:%d\n", Are, Are > Area);
    printf("PIB: %f reais Venceu:%d\n", pib, pib > Pib);
    printf("População: %d Venceu:%d\n", populaca, populaca > populacao);
    printf("Turismo: %d Venceu:%d\n", Turism, Turism > Turismo);
//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE DENSIDADE;
    printf("Densidade Populacional: %f hab/km² Venceu:%d\n", Densidad, Densidad > Densidade);
//USANDO OS ESPECIFICADORES DE FORMATO %F PARA IMPRIMIR OS VALORES DE PIB PER CAPITA;
    printf("PIB Per Capita: %f reais Venceu:%d\n", PibPerCapit, PibPerCapit > PibPerCapita);
//SUPER PODER = SOMA DE POPULAÇÃO, ÁREA, PIB, PIB PER CAPITA E DENSIDADE POPULACIONAL INVERTIDA E PONTOS TURISTICO; 
    printf("Super Poder: %.2f Venceu:%d\n", SuperPode, SuperPode > SuperPoder);

    if (Pib >= pib) //ESTRUTURA DE DECISÃO COMPOSTA COMPARANDO OS PIB E DEFININDO O GANHADOR!
    {
        printf("\nCarta A1 Ganhou da Carta B1! ANA Venceu!!!\n");
    }
    else
    {
        printf("\nCarta B1 Ganhou da Carta A1! CLARA Venceu!!!\n");
    }
    

        
    return 0;



}