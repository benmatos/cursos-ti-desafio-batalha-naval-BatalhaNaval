#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    int tabuleiro[5][5];   
    int colunas = sizeof(tabuleiro[0]) / sizeof(tabuleiro[0][0]);

    for (int linha = 0; linha < colunas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            tabuleiro[linha][coluna] = 0;

            //cria navio 1
            if(coluna == 1 && linha > 0 && linha < 4) tabuleiro[linha][coluna] = 1;

            //cria navio 2
            if(coluna == 1 && coluna > 1 ) tabuleiro[linha][coluna] = 2;

            // imprime o tabuleiro
            printf("%d ",tabuleiro[linha][coluna]);
        }
        printf("\n");
    }    
    printf("\n");
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int tabuleiro2[10][10];   
    int linhas = sizeof(tabuleiro2[0]) / sizeof(tabuleiro2[0][0]);
    
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < linhas; coluna++) {
            tabuleiro2[linha][coluna] = 0;

            //cria navio 1
            if(coluna == 1 && linha > 0 && linha < 4) tabuleiro2[linha][coluna] = 1;

            //cria navio 2
            if(linha == 1 && coluna > 4 && coluna < 8 ) tabuleiro2[linha][coluna] = 2;

            //cria navio 3
            if(linha + coluna == 9 && linha > 3 && linha < 7 ) tabuleiro2[linha][coluna] = 3;

            //cria navio 4
            if(linha == coluna && linha > 5 && linha < 9 ) tabuleiro2[linha][coluna] = 4;

            // imprime o tabuleiro
            printf("%d ",tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }  
    printf("\n");
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    //Inicializa todos os elementos com zero
    int tabuleiro3[10][10] = {0};

    colunas = sizeof(tabuleiro3[0]) / sizeof(tabuleiro3[0][0]);
    int inicio_cone = (colunas/2);
    int numeros_impar[4] = {1,3,5,7};

    for (int linha = 0; linha < 5; linha++) {
        for (int i = 1; i <= numeros_impar[linha] ; i++) {
            tabuleiro3[linha][inicio_cone + linha] = 1;
        }
        inicio_cone --;
    }

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ",tabuleiro3[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro4[10][10] = {0};

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            if(linha == 5 || coluna == 5) tabuleiro4[linha][coluna] = 1;
            printf("%d ",tabuleiro4[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
