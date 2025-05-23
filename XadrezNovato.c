#include <stdio.h>

//Função recursiva torre
void torre(numeroT)
{
    if (numeroT > 0)
    {
    printf("Direita\n");
    torre(numeroT - 1);
    }
}

//Função recursiva bispo
void bispo(int linha, int coluna, int passos)
{
   if (passos > 0)
   {

    for (int i = 0; i < 1; i++) // Mov vertical
    {
        printf("Cima\n");
     
        for (int j = 0; j < 1; j++) // Mov horizontal
        {
            printf("Direita\n");
        }
    
    }
       bispo(linha - 1, coluna + 1, passos - 1);
   }
}
    
//Função recursiva rainha
void rainha(int numeroR)
{
    if (numeroR > 0)
    {
    printf("Esquerda\n");
    rainha(numeroR - 1);
    }
}

//Função recursiva cavalo
void cavalo()
{
    for(int i = 0; i < 2; i++)
    {
       printf("Cima\n");
    }
    for (int j = 0; j < 1; j++)
    {
       printf("Direita\n");
    }
}

int main(){
    
    //Movimentos

    printf("Movimento da Torre:\n");
    torre(5);

    printf("\nMovimento do Bispo:\n");
    bispo(0, 0, 5); // Linha, Coluna, Passos

    printf("\nMovimento da Rainha:\n");
    rainha(8);
    
    printf("\nMovimento do Cavalo:\n");
    cavalo();
    
return 0;
}

