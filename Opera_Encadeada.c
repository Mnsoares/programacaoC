#include <stdio.h>

int main() {
  int idade;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);

  if (idade < 12) {
    printf("Você é uma Criança!\n");
  } 
  else if (idade >= 12 && idade < 18)
   {
    printf("Você é um Adolescente!\n");
  } 
  else if (idade >= 18 && idade < 60) 
  {
    printf("Você é um Adulto!\n");
  }
   else
   {
    printf("Você é um Idoso!\n");
  }

  return 0;
}