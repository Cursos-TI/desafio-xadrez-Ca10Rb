#include <stdio.h>

int main(){
    
    int rainha = 1;
    int bispo = 1;
    int torre = 1;
    
// Movimento da torre
    while (torre <= 5)
    {
        printf("Uma casa para Direita\n");
        torre++;
    }

// Movimento do bispo
    do
    {
        printf("Uma casa para Cima e uma casa para Direita\n");
        bispo++;
    } while (bispo <= 5);

// Movimento da rainha
    for (rainha = 1; rainha <= 8; rainha++)
    {
        printf("Uma casa para esquerda\n");
    }
    
    
return 0;
}