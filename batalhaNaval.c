#include <stdio.h>


int main() {

    int y; // variavel para assumir os valores de indices das linhas.
    int x; // variavel para assumir os valores de indices das colunas.
    int tabuleiro[10] [10] = {

        {3,3,3,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,3,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,3,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,3,0,0,0},
        {0,3,0,0,0,0,0,3,0,0},
        {0,3,0,0,0,0,0,0,3,0},
        {0,0,0,0,0,0,0,0,0,0},

    };

    printf("As posições dos navios no tabuleiro são indicadas pelo número 3 e estão localizadas nas seguintes coordenadas: \n");
    printf("tabuleiro [0][0], tabuleiro [0][1], tabuleiro [0][2]. \n \n"); // Navio na horizontal
    printf("tabuleiro [1][8], tabuleiro [2][7], tabuleiro [3][6]. \n \n"); // Navio na diagonal secundária
    printf("tabuleiro [6][1], tabuleiro [7][1], tabuleiro [8][1]. \n \n"); // Navio na vertical
    printf("tabuleiro [6][6], tabuleiro [7][7], tabuleiro [8][8]. \n \n"); // Navio na diagonal principal

    printf("Executando o código é possível verificar as coordenadas visivelmente. \n \n");

    // Estrutura de repetição "for" utilizada para reproduzir o tabuleiro.
    // "Y" refere-se às linhas e "X" às colunas.

    for(y = 0; y <= 9; y ++){
        for(x = 0; x <= 9; x ++){
            printf("%d,", tabuleiro[y][x]);
        }
        
        printf("\n");

    }

    

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
