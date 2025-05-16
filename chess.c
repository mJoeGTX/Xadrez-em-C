#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

void inicializarTabuleiro(char tabuleiro[8][8]) {
    char layout[8][8] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}
    };

    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            tabuleiro[i][j] = layout[i][j];
}

void imprimirTabuleiro(char tabuleiro[8][8]) {
    printf("  a b c d e f g h\n");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; ++j) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("%d\n", 8 - i);
    }
    printf("  a b c d e f g h\n");
}

int moverPeca(char tabuleiro[8][8], int linhaOrigem, int colOrigem, int linhaDestino, int colDestino) {
    if (linhaOrigem < 0 || linhaOrigem > 7 || colOrigem < 0 || colOrigem > 7 ||
        linhaDestino < 0 || linhaDestino > 7 || colDestino < 0 || colDestino > 7) {
        return 0;
    }

    tabuleiro[linhaDestino][colDestino] = tabuleiro[linhaOrigem][colOrigem];
    tabuleiro[linhaOrigem][colOrigem] = ' ';
    return 1;
}
