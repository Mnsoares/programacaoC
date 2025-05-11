#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int NumeroSecreto, palpite;
    int regras;

       printf("Menu Principal\n");
       printf("1. Iniciar Jogo.\n");
       printf("2 Ver Regras.\n");
       printf("3. Sair. \n");
       printf("Escolha Uma Opção: \n");
       scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                srand(time(0));
                NumeroSecreto = rand () % 10 + 1;
                printf("Digite Um Número de 0 a 9! \n");
                scanf("%d", &palpite); 
                
                if (NumeroSecreto == palpite  )
                {
                   printf("Você Acertou! \n"); 
                } else {
                   printf("Você Errou! \n");
                   printf("Número Secreto %d \n", NumeroSecreto);
                }
                
            
                break;
            case 2:
                printf("A Explicação Das Regras! \n");
                printf("Digite A Opção Regra:\n");
                scanf("%d", &regras);
                switch (regras)
                {
                case 1:
                   printf("\nRegra Do Jogo! Clicar na Opção 1, logo após Digitar o número de 0 a 9, onde vai ser apresentador o valor e se voçê acertou ou errou!\n");
                    break;
                case 2:
                   printf("Não é permitido um valor diferente de 0 a 9!");
                    break;
                default:
                   printf("Opção Invalida!"); 
                    break;
                }
                break;
            case 3:
                printf("Saindo Do Jogo....");
                break;
            
            default:
                printf("Opção Invalida! \n");
                break;
            }       











}
