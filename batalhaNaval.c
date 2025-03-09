#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10] = {0};

    for (int x = 3; x <= 5; x++)
    {
        tabuleiro[3][x] = 3; 
    }

    for (int y = 5; y <= 7; y++)
    {
        tabuleiro [y][7] = 3;
    }
    
    
    for (int w = 0; w <= 2; w++)
    {
        tabuleiro [w][w]= 3;
    }
    
    for (int z = 6; z <= 8; z++)
    {
        tabuleiro [z][z-4]= 3;
    }

    /*
    char *linha [10] =  {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    char coluna [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    
    
    for ( int j = 0; j < 10; j++)
    {
        printf ("%c ", coluna [j]);
    }


    printf ("\n");
    for ( int i = 0; i < 10; i++)
    {
            printf ("%s \n", linha [i]);
    }
    
    */
    
    printf ("\n");
    printf ("TABULEIRO BATALHA NAVAL \n");
    printf ("\n");

    printf("- ");
    for ( char nomecoluna = 'A'; nomecoluna <= 'J'; nomecoluna++)
    {
        printf ("%c ", nomecoluna);
    }
     printf ("\n");

     for (int y = 0; y < 10; y++)
    {
        printf ("%d ", y + 1);
        
        for (int x = 0; x < 10; x++)
        {
            printf ("%d ", tabuleiro [y][x]);
        }
        printf ("\n");
        
    }
    

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
