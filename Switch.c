#include <stdio.h>

int main() {
  int opcao;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo!\n");
  printf("2. Ver Regras:\n");
  printf("3. Sair.\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Execução Do Jogo\n");
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

}