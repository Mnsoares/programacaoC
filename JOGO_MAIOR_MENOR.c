#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int NumeroJogador, NumeroComputador, Resultado;
    char tipoComparacao;

    //GERAR NÚMERO ALEATÓRIO
    srand(time(0));
    NumeroComputador = rand() % 100 + 1; // NÚMERO ENTRE 1 e 100

    //INICIO DO JOGO

printf("*** Bem-Vindo Ao Jogo Maior, Menor ou Igual! *** \n");
printf("Você Deve Escolher Um Número E O Tipo De Comparação. \n");
printf("M. Maior \n");
printf("N. Menor \n");
printf("I. Igual \n");

printf("Escolha A Comparação: \n");
scanf("%c", &tipoComparacao);

printf("Digite Seu Número (Entre 1 e 100): \n");
scanf("%d", &NumeroJogador);

//EXIBIR NÚMERO DO COMPUTADOR
printf("O Número Do Computador  É: %d \n", NumeroComputador);

switch (tipoComparacao)
{
case 'M':
case 'm':
  printf("Você Escolheu A Opção Maior! \n");
    Resultado = NumeroJogador > NumeroComputador ? 1 : 0;

    break;
case 'N':
case 'n':
   printf("Você Escolheu A Opção Menor! \n");
    Resultado = NumeroJogador < NumeroComputador ? 1 : 0;
    
    break;
case 'I':
case 'i':
   printf("Você Escolheu A Opção Igual! \n");
    Resultado = NumeroJogador < NumeroComputador ? 1 : 0;
    break;

default:
   printf("Opção De Jogo Invalida! \n");
    break;
}

if (Resultado == 1)
{
   printf("Parabéns, Você Venceu! \n");
}else{
    printf("Infelizmente, Você Perdeu! \n");
}

printf("O Número Do Computador  É: %d E O Número do Jogador É: %d \n", NumeroComputador, NumeroJogador);

printf("\n\n\n\nFim!\n");








}
