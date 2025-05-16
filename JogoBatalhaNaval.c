#include <stdio.h>

int main () {

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; //TABULEIRO MATRIZ 10X10
    //EXIBINDO O TABULEIRO
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }
    
printf("\n*** TABULEIRO BATALHA NAVAL ***\n");
printf(" ");
for (int j = 0; j < 10; j++)
{
printf("%c ", linha [j]);
}








return 0;
}