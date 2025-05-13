#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

switch (opcao)
{
    case 1:
        printf("\n*** Calcular Média ***\n");
        printf("Digite a primeira nota\n");
        scanf("%f", &nota1);
        printf("Digite a Segunda Nota\n");
        scanf("%f", &nota2);  

        //TESTAR A CONDIÇÃO SE A NOTA É >= 0 E <= 10


              if ((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10))
              { media = (nota1 + nota2) / 2;
                printf("A Média É: %.2f\n", media);
                 printf("Entrada Correta!\n");
            }else{
                printf("Entrada Com Valores Errado!\n");
              }
                      
    break;
    case 2:
        printf("Determinar Status\n");
        printf("Entrar Com A Média: \n");
        scanf( "%f", media >= 6);
        media ? printf("Aprovado!\n") : printf("Reprovado!\n");
           //NÃO ESTA FUNCIONANDO 
    break;
    case 3:  
        printf("Sair Do Programa...\n");

  //  {float Media;
        
       // printf("DIgite A Sua Média: ");
     //   scanf("%f", &Media);
     //   if (Media >=6)
     //   {
     //      printf("Aprovado!\n");
     //   }else if (media = 5)
     //   {
     //       printf("Recuperação!\n");
     //   }else
     //   {
     //       printf("Reprovado!");
     //   }
 //   }
 //   break;

default:
   printf("Opção Invalida\n");
    break;


}

}