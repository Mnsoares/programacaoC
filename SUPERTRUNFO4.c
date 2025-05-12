#include <stdio.h>

int main() {
  int opcao;

  printf("*** Super Trunfo ***\n");
  printf("1. Vamos Iniciar O Jogo!\n");
  printf("2. Ver Regras:\n");
  printf("3. Sair.\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

switch (opcao)
  {
  case 1:
    printf("\nVamos Começar!\n");
    break;
  case 2:
    printf("As Regras São........\n ");
    break;
    case 3:
    printf("Saindo Do Jogo........\n");
    break;
  default:
  printf("Opção Invalida \n"); 
    break;
  }

    char nome [20] = "JOGADORES";
    char Carta [20] = "A1";
    char Estado [20] = "Sergipe";
    char Cidade [20] = "Aracaju";
    float Area = 181857.67;
    float Pib = 16447105.18; 
    int populacao = 602757.23;
    int Turismo = 10;
   
 
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
    float pib = 954487.49;
    int populaca = 2417678.02;
    int Turism = 10;

//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA DEBSIDADE POPUPLACIONAL = POPULAÇÃO / AREA
    float Densidad = populaca / Are;  
//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA PIB PER CAPITA = PIB / POPULAÇÃO 
    double PibPerCapit = pib/ populaca;  
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

    int Item;
  
    
    printf("\n*** Vamos Escolher Uma Das Características De Cada Carta! ***\n");
    printf("1. Area \n");
    printf("2. Pib \n");
    printf("3. População \n");
    printf("4. Turismo \n");
    printf("5. Densidade Populacional \n");
    printf("6. Pib Per Capita \n");
    printf("7. Super Poder \n");
    printf("Escolha: \n");  
    scanf("%d", &Item);

    switch ((Area) || (Pib) || (populacao) || (Turismo) || (Densidade) || (PibPerCapita) || (SuperPoder))
  {
  case 1:
    printf("A1 - Aracaju. Area - ");
    break;
  case 2:
    printf("A1 - Aracaju. Pib - ");
    break;
    case 3:
    printf("A1 - Aracaju. População - ");
    break;
    case 4:
    printf("A1 - Aracaju. Turismo - ");
    break;
    case 5:
    printf("A1 - Aracaju. Densidade Populacional - ");
    break;
    case 6:
    printf("A1 - Aracaju. Pib Per Capita - ");
    break;
    case 7:
    printf("A1 - ARacaju. Super Poder - ");
    break;
  default:
  printf("Opção Invalida \n"); 
    break;
  }

    switch ((Are) || (pib) || (populaca) || (Turism) || (Densidad) || (PibPerCapit) || (SuperPode))
  {
  case 1:
    printf("B1 - Salvador. Area - \n");
    break;
  case 2:
    printf("B1 - Salvador. Pib - \n");
    break;
    case 3:
    printf("B1 - Salvador. População - \n");
    break;
    case 4:
    printf("B1 - Salvador. Turismo - \n");
    break;
    case 5:
    printf("B1 - Salvador. Densidade Populacional - \n");
    break;
    case 6:
    printf("B1 - Salvador. Pib Per Capita - \n");
    break;
    case 7:
    printf("B1 - Salvador. Super Poder - \n");
    break;
  default:
  printf("Opção Invalida \n"); 
    break;
  }

if ((Area == Are) || (Pib == pib) || (populacao == populaca) || (Turismo == Turism) || (Densidade == Densidad) || (PibPerCapita == PibPerCapit) || (SuperPoder == SuperPode))
{
    printf("***  Jogo Empatou!  *** \n");
}else if ((Area >= Are) && (Pib >= pib) || 
           (populacao >= populaca) && (Turismo >= Turism) ||
            (Densidade < Densidad) && (PibPerCapita >= PibPerCapit) ||
              (SuperPoder >= SuperPoder))
{
  printf("***  Você Ganhou!  *** \n");
}
else
{
    printf("***  Você Perdeu!  *** \n ");
}






return 0;

}