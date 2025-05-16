#ifndef CHESS_H
#define CHESS_H

void inicializarTabuleiro(char tabuleiro[8][8]);
void imprimirTabuleiro(char tabuleiro[8][8]);
int moverPeca(char tabuleiro[8][8], int linhaOrigem, int colOrigem, int linhaDestino, int colDestino);

#endif
