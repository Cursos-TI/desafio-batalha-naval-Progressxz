#include <stdio.h>

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // tamanho do tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializando o tabuleiro com zeros

    // Definindo as coordenadas dos navios
    // Navio 1 - Orientação vertical
    tabuleiro[1][1] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[3][1] = 3;

    // Navio 2 - Orientação horizontal
    tabuleiro[5][5] = 3;
    tabuleiro[5][6] = 3;
    tabuleiro[5][7] = 3;

    // Exibindo as coordenadas dos navios
    printf("Navio 1 (Vertical) posicionado nas coordenadas:\n");
    printf("Parte do navio posicionado na casa [1][1]\n");
    printf("Parte do navio posicionado na casa [2][1]\n");
    printf("Parte do navio posicionado na casa [3][1]\n");

    printf("Navio 2 (Horizontal) posicionado nas coordenadas:\n");
    printf("Parte do navio posicionado na casa [5][5]\n");
    printf("Parte do navio posicionado na casa [5][6]\n");
    printf("Parte do navio posicionado na casa [5][7]\n");

    // tabuleiro com os navios
    printf("\nTabuleiro:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}