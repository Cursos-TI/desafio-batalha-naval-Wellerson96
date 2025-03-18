#include <stdio.h>


int main() {

    int y;
    int x;
    int tabuleiro[5] [5] = {

        {3,3,3,0,0},
        {0,0,0,0,0},
        {0,0,0,3,0},
        {0,0,0,3,0},
        {0,0,0,3,0}

    };

    printf("As posições dos navios no tabuleiro são indicadas pelo número 3 e estão localizadas nas seguintes coordenadas: \n");
    printf("tabuleiro [0][0], tabuleiro [0][1], tabuleiro [0][2]. \n e \n");
    printf("tabuleiro [2][3], tabuleiro [3][3], tabuleiro [4][3]. \n \n");

    printf("Executando o código é possível verificar as coordenadas visivelmente. \n \n");

    // Estrutura de repetição "for" utilizada para reproduzir o tabuleiro.
    // "Y" refere-se às linhas e "X" às colunas.

    for(y = 0; y <= 4; y ++){
        for(x = 0; x <= 4; x ++){
            printf("%d,", tabuleiro[y][x]);
        }
        
        printf("\n");

    }

   

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
