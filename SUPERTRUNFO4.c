#include <stdio.h>

int main() {
  int opcao;
//MENU INICIAL DO JOGO, COM AS OPÇÕES DE INICIAR, REGRAS E SAIR;
  printf("*** Super Trunfo ***\n");
  printf("1. Vamos Iniciar O Jogo!\n");
  printf("2. Ver Regras:\n");
  printf("3. Sair.\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);
// VARIAVEIS DA CARTA A1;
    char Carta [20] = "A1";
    char Estado [20] = "Sergipe";
    char Cidade [20] = "Aracaju";
    float Area = 181857.67;
    float Pib = 16447105.18; 
    int populacao = 602757.23;
    int Turismo = 10;
   
 
//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA DEBSIDADE POPUPLACIONAL = POPULAÇÃO / AREA;
    float Densidade = populacao / Area;  
//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA PIB PER CAPITA = PIB / POPULAÇÃO; 
    float PibPerCapita = Pib / populacao; 
//SUPER PODER CALCULO DAS AREA;
    float SuperPoder = Area + Pib + populacao + PibPerCapita + Turismo - Densidade;
//COMPARAÇÃO DAS CARTAS, VENCEU RESULTADO = 1, PERDEU RESULTADO = 0;
        
//VARIAVEIS DA CARTA B1;
    char Cart [20] = "B1";
    char Estad [20] = "Bahia";
    char Cidad [20] = "Salvador";
    float Are = 693442.89;
    float pib = 954487.49;
    int populaca = 2417678.02;
    int Turism = 10;

//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA DEBSIDADE POPUPLACIONAL = POPULAÇÃO / AREA;
    float Densidad = populaca / Are;  
//USO DA VARIAVEL FLOAT, REALIZANDO O CALCULO DA PIB PER CAPITA = PIB / POPULAÇÃO;
    double PibPerCapit = pib/ populaca;  
//SUPER PODER CALCULO DAS AREA;
    float SuperPode = Are + pib + populaca + PibPerCapit + Turism - Densidad;

switch (opcao)
  {
  case 1:
    printf("\nJogadores, mostrem suas cartas!\n");

//Cartas da jogadarora coletando os dados das variaveis;
//printf coleta valores correspodentes a primeira carta;
    
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

//Cartas da jogadarora coletando os VALORES DE CADA VARIAVEL;
//printf coleta valores correspodentes a segunda carta;

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
    break;

  case 2:
    printf("\nA finalidade do jogo é escolher uma carta que representa um estado e, a partir dessa escolha, comparar os valores correspondentes de cada item mencionado com os da sua cidade (área territorial, população, PIB, PIB per capita, turismo e densidade populacional). Vence a cidade que tiver o valor maior no item escolhido.\n \nEscolha um dos itens abaixo para comparar os valores entre as Cartas A1 e B1 e descubra qual cidade se destaca. Boa sorte!\n");
    break;
    case 3:
    printf("Saindo Do Jogo........\n");
    break;
  default:
  printf("Opção Invalida \n"); 
    break;
  }
//PARTE DOIS DO JOGO ONDE OS JOGADORES ESCOLHEM, QUAL A CARACTERISTICA DA CARTA VAI SER DISPUTADA NA RODADA;

    int Item;

//MENU PARA ESCOLHER QUAL ITEM VAI SER COMPARADO NO JOGO;
    printf("\n*** Vamos Escolher Uma Das Características De Cada Carta! ***\n");
    printf("1. Area \n");
    printf("2. Pib \n");
    printf("3. População \n");
    printf("4. Turismo \n");
    printf("5. Densidade Populacional \n");
    printf("6. Pib Per Capita \n");
    printf("7. Super Poder \n");
    printf("Escolha Um Número e Clique Enter: \n");  
    scanf("%d", &Item);
//SWITCH COMPARANDO OS VALORES DE CADA CARTA E IMPRIMINDO QUEM FOI O GANHADOR;
    switch (Item)
  {
  case 1:
    printf("\nA1 - Aracaju. Area -> B1 - Salvador. Area \n");
    if (Area > Are){
    printf("\n***  Carta A1, Você Ganhou!  *** \n");
}else if (Area < Are){
 printf("\n***  Carta B1, Você Ganhou!  *** \n");
}else{
    printf("\n***  Jogo Empatou!  *** \n ");
}
    break;
  case 2:
    printf("\nA1 - Aracaju. PIB ->  B1 - Salvador. PIB \n");
    if (Pib > pib){
    printf("\n***  Carta A1, Você Ganhou!  *** \n");
}else if (Pib < pib){
 printf("\n***  Carta B1, Você Ganhou!  *** \n");
}else{
    printf("\n***  Jogo Empatou!  *** \n ");
}
    break;
    case 3:
    printf("\nA1 - Aracaju. População ->  B1 - Salvador. População \n");
    if (populacao > populaca){
    printf("\n***  Carta A1, Você Ganhou!  *** \n");
}else if (populacao < populaca){
 printf("\n***  Carta B1, Você Ganhou!  *** \n");
}else{
    printf("\n***  Jogo Empatou!  *** \n ");
}
    break;
    case 4:
    printf("\nA1 - Aracaju. Turismo ->  B1 - Salvador. Turismo \n");
    if (Turismo > Turism){
    printf("\n***  Carta A1, Você Ganhou!  *** \n");
}else if (Turismo < Turism){
 printf("\n***  Carta B1, Você Ganhou!  *** \n");
}else{
    printf("\n***  Jogo Empatou!  *** \n ");
}
    break;
    case 5:
    printf("\nA1 - Aracaju. Densidade Populacional ->  B1 - Salvador. Densidade Populacional \n");
    if (Densidade < Densidad){
    printf("\n***  Carta A1, Você Ganhou!  *** \n");
}else if (Densidade > Densidad){
 printf("\n***  Carta B1, Você Ganhou!  *** \n");
}else{
    printf("\n***  Jogo Empatou!  *** \n ");
}
    break;
    case 6:
    printf("\nA1 - Aracaju. PIB Per Capita -> B1 - Salvador. PIB Per Capita \n");
    if (PibPerCapita > PibPerCapit){
    printf("\n***  Carta A1, Você Ganhou!  *** \n");
}else if (PibPerCapita < PibPerCapit){
 printf("\n***  Carta B1, Você Ganhou!  *** \n");
}else{
    printf("\n***  Jogo Empatou!  *** \n ");
}
    break;
    case 7:
    printf("\nA1 - Aracaju. Super Poder -> B1 - Salvador. Super Poder \n");
    if (SuperPoder > SuperPode){
    printf("\n***  Carta A1, Você Ganhou!  *** \n");

}else if (SuperPoder < SuperPode){
 printf("\n***  Carta B1, Você Ganhou!  *** \n");
}else{
    printf("\n***  Jogo Empatou!  *** \n ");
}
    break;
  default:
  printf("\n*** Opção Invalida *** \n"); 
    break;
  }

return 0;

}