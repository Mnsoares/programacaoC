#include <stdio.h>
//MOVIMENTO DA TORRE 
 void MoverTorre (int casas){ //Recursiva para o movimento do Torre nivel mestre
    if (casas > 0)
    {
        printf("Cima \n"); // Imprime o nome
        MoverTorre (casas -1);
    } 
}

// MOVIMENTO DO BISPO 
void MoverBispo(char bisp[20], int movimento, int total) { //Recursiva para o movimento do Bispo nivel mestre
    if (movimento <= total) {
        printf("%s\n", bisp);
        MoverBispo(bisp, movimento + 1, total);
    }
}
//MOVIMENTO DA RAINHA
void MovimentoRainha(const char *raynha, int contador) { // poderia utilizar o mesmo codigo para movimentar o cavalo L
    if (contador <= 0) {
        return; // Condição de base: quando o contador for 0, a função para
    }

    printf("%s", raynha); // Imprime o MOVIMENTO 
    MovimentoRainha(raynha, contador - 1); // Chamada recursiva, reduzindo o contador
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     
      
   int Bispo = 0;
    char nome[20] = "Diagonal"; // Assume um nome com no máximo 20 caracteres

    do {
        printf("%s\n", nome); // Imprime o nome
        Bispo++; // Incrementa o contador
    } while (Bispo < 5); // Condição para parar de imprimir


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
 
    int a = 0; //movimentação da torre utilizando WHILE

    while (a < 5)
    {
        printf("Direita \n"); // Imprime o nome
                
        a++;
    }
    // Implementação de Movimentação da Rainha
 // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

 for (int i = 0; i < 5; i++)
    {
       printf("Baixo\n"); //movimento da rainha 5 vezes para baixo
    }
    for (int i = 0; i < 5; i++)
    {
      printf("Esquerda "); //movimento da rainha 5 vezes para esquerda 
    }

    printf("\n"); // para gerar espaco entre codigos

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
     int movimentocompleto = 1;
 
   while (movimentocompleto--)
   {
   for (int i = 0; i < 2; i++)
   {
    printf("Cima \n"); // Imprime o nome
    
   }
    printf("Cima "); //movimento do cavalo duas vezes para baixo e uma para a direita
    printf("Direita \n"); // Imprime o nome
   }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
   
    MoverTorre(5);  // Movimento da torre iniciando com a recursiva 
    printf("Direita \n"); // Imprime o nome

    char bisp[20] = "Diagonal"; // movimento a ser impresso 
    int total_vezes = 5;

    MoverBispo(nome, 1, total_vezes);

    //MOVIMENTO DA RAINHA
    const char *nome1 = "Baixo\n"; // movimento a ser impresso
    const char *nome2 = "Esquerda "; // movimento a ser impresso

    
    MovimentoRainha(nome1, 5); // Definição de vezes que o numero sera impresso
   
    MovimentoRainha(nome2, 2); // Definição de vezes que o numero sera impresso
    printf("\n");



    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}