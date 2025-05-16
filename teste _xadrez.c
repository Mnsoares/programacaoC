#include <stdio.h>

void MoverTorre (int casas){

    if (casas > 0)
    {
        printf("Cima \n");
        MoverTorre (casas -1);
          

    }
    
}

int main () {
    MoverTorre(5);
   
    printf("Direita \n");


    return 0;
 
}