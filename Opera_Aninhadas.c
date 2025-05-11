#include <stdio.h>

int main () {

    int idade;
    float renda;

    printf("Digite A Sua Idade: \n");
    scanf("%d", &idade);
    printf("Digite A Sua Renda Mensal: \n");
    scanf("%f", &renda);

            if (idade <= 18 || idade >=60)
            {    
                 if (renda < 2000)
                 {
                 printf("Você Tem Direito Ao Desconto!\n");
                 }
                 else
                 {
                 printf("Você Não Tem Direito Ao Desconto Devido a Renda!\n");
                 }
                 } else
            {
                printf("Você Não Atende Aos Criterios Devido A Idade!\n");
            }   

           
        
    
    
    
    }
        







