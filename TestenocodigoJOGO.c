#include <stdio.h>

int main() {
  int opcao;

  printf("*** Super Trunfo ***\n");
  printf("1. Vamos Iniciar O Jogo!\n");
  printf("2. Ver Regras:\n");
  printf("3. Sair.\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

// ===> Substituindo o switch por if/else if
  if (opcao == 1) {
    printf("\nJogadores, mostrem suas cartas!\n");

    char Carta[20] = "A1";
    char Estado[20] = "Sergipe";
    char Cidade[20] = "Aracaju";
    float Area = 181857.67;
    float Pib = 16447105.18;
    int populacao = 602757.23;
    int Turismo = 10;

    float Densidade = populacao / Area;
    float PibPerCapita = Pib / populacao;
    float SuperPoder = Area + Pib + populacao + PibPerCapita + Turismo - Densidade;

    char Cart[20] = "B1";
    char Estad[20] = "Bahia";
    char Cidad[20] = "Salvador";
    float Are = 693442.89;
    float pib = 954487.49;
    int populaca = 2417678.02;
    int Turism = 10;

    float Densidad = populaca / Are;
    double PibPerCapit = pib / populaca;
    float SuperPode = Are + pib + populaca + PibPerCapit + Turism - Densidad;

    printf("\nANA\n");
    printf("Carta: %s\n", Carta);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Area: %f km² Venceu:%d\n", Area, Area > Are);
    printf("PIB: %f reais Venceu:%d\n", Pib, Pib > pib);
    printf("População: %d Venceu:%d\n", populacao, populacao > populaca);
    printf("Turismo: %d Venceu:%d\n", Turismo, Turismo > Turism);
    printf("Densidade Populacional: %f hab/km² Venceu:%d\n", Densidade, Densidade > Densidad);
    printf("PIB Per Capita: %f reais Venceu:%d\n", PibPerCapita, PibPerCapita > PibPerCapit);
    printf("Super Poder: %.2f Venceu:%d\n", SuperPoder, SuperPoder > SuperPode);

    printf("\nCLARA\n");
    printf("Carta: %s\n", Cart);
    printf("Estado: %s\n", Estad);
    printf("Cidade: %s\n", Cidad);
    printf("Area: %f km² Venceu:%d\n", Are, Are > Area);
    printf("PIB: %f reais Venceu:%d\n", pib, pib > Pib);
    printf("População: %d Venceu:%d\n", populaca, populaca > populacao);
    printf("Turismo: %d Venceu:%d\n", Turism, Turism > Turismo);
    printf("Densidade Populacional: %f hab/km² Venceu:%d\n", Densidad, Densidad > Densidade);
    printf("PIB Per Capita: %f reais Venceu:%d\n", PibPerCapit, PibPerCapit > PibPerCapita);
    printf("Super Poder: %.2f Venceu:%d\n", SuperPode, SuperPode > SuperPoder);

    // Aqui permanece a parte da escolha de característica
    // ...
    
  } else if (opcao == 2) {
    printf("As Regras São........\n");
  } else if (opcao == 3) {
    printf("Saindo Do Jogo........\n");
  } else {
    printf("Opção Invalida \n");
  }

  return 0;
}