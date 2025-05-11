#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("Digite A Sua Idade: \n");
  scanf("%d", &idade);
  printf("Digite A Sua Renda Mensal: \n");
  scanf("%f", &renda);
  printf("Digite O Número De Dependentes: \n");
  scanf("%d", &dependentes);

if (idade >=18 && idade <= 65)
  {if (renda < 3000.0)
     {if (dependentes > 2)
        {printf("Você Está Qualificado Para Os Benefícios Sociais:\n");} 
    else{printf("Você Não Está Qualificado Para Os Benefícios Devido Ao Número De Dependentes:\n");} }
      else {printf("Você Não Está Qualificado Para Os Benefícios Devido À Renda:\n");} }
         else {printf("Você Não Está Qualificado Para Os Benefícios Devido À Idade:\n");} }


    








