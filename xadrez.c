#include <stdio.h>


int main() {

    /*
        TORRE: 
            - Se movimentar 5x à direita

        BISPO:
            - Se movimentar diagonalmente 5x Pracima e direita

        RAINHA:
            - Se movimentar 8x para esquerda

        CAVALO:
            - Se movimentar 2 casas para baixo, 1 para esquerda
    */



    // TORRE:
    printf("MOVIMENTAÇÃO DA TORRE, 5 CASAS PARA DIREITA:\n");
    // LOOPING QUE DETERMINA A POSIÇÃO DA TORRE
    for(int pos = 1; pos < 5; ++pos){

        printf("DIREITA\n");
    }
    printf("TORRE\n");
    printf("\n\n");


    // BISPO:
    printf("MOVIMENTAÇÃO DO BISPO, DIAGONALMENTE 5X PARA CIMA E DIREITA:\n");
    int pos = 1;
    while(pos < 5){
        printf("CIMA DIREITA\n");
        pos++;
    }
    printf("BISPO\n");
    printf("\n\n");



    // RAINHA:
    printf("MOVIMENTAÇÃO DO RAINHA, 8 CASAS PARA ESQUERDA:\n");
    for(int pos = 7; pos >= 1; --pos){
        printf("ESQUERDA\n");
    }
    printf("RAINHA\n");
    printf("\n\n");




    return 0;
}


