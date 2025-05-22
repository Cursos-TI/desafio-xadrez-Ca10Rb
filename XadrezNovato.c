#include <stdio.h>

int main(){
    
    int rainha = 1;
    int bispo = 1;
    int torre = 1;
    int cavalo = 1;
    
// Movimento da torre
    while (torre <= 5)
    {
        printf("Direita\n");
        torre++;
    }

// Movimento do bispo
    do
    {
        printf("Cima e Direita\n");
        bispo++;
    } while (bispo <= 5);

// Movimento da rainha
    for (rainha = 1; rainha <= 8; rainha++)
    {
        printf("Esquerda\n");
    }
    
// Movimento do cavalo
   int passobaixo = 2;
   int passoesquerda = 1;
   int passoatual = 0;

   while (cavalo == 1)
   {
    
      for (int i = 0; i < passobaixo; i++)
    {
        printf("Baixo\n");
    }
     
      while (passoatual < passoesquerda)
      {
        printf("Esquerda\n");
        passoatual++;
      }
    cavalo++; // Evitar loop infinito
   }
   
return 0;
}

