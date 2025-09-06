#include <stdio.h>

void MovimentaTorre(int pos){

    // verifica se a posição é maior que 1 (posição onde a peça ficará)
    if(pos > 1){
        printf("DIREITA\n");
        pos -= 1;

        return MovimentaTorre(pos);
    }
    printf("TORRE\n");
}

void MovimentaBispo(int pos){

    // Verifica se aposição é -1, que indica que já foi movimentado
    if(pos != -1){

        // Inicia a movimentação
        for(int i = 1; i < pos; i++){
            printf("CIMA DIREITA\n");
        }

        /*
            Ao finalizar o loop, ele chama a função novamente, porém 
            mandando um valor coringa, onde indica que já houve a movimentação.
        */
        MovimentaBispo(-1);

    }else{
        // Ao verificar que já houve a movimentação, ele mostra a posição do bispo.
        printf("BISPO\n");
    }
}

void MovimentaRainha(int pos){

    if(pos > 1){
        printf("ESQUERDA\n");
        pos -= 1;

        return MovimentaRainha(pos);
    }

    // Caso a condição anterior retornar "false", imprimirá o nome da peça.
    printf("RAINHA\n");
}

int main() {

    /*
        TORRE: 
            - Se movimentar 5x à direita

        BISPO:
            - Se movimentar diagonalmente 5x Pra cima e direita

        RAINHA:
            - Se movimentar 8x para esquerda

        CAVALO:
            - Se movimentar 2 casas para baixo, 1 para esquerda
    */



    // TORRE:
    printf("MOVIMENTAÇÃO DA TORRE, 5 CASAS PARA DIREITA:\n");
    MovimentaTorre(5); // Chama a função adicionando 5 casas que serão movimentadas.
    printf("\n\n");


    // BISPO:
    printf("MOVIMENTAÇÃO DO BISPO, DIAGONALMENTE 5X PARA CIMA E DIREITA:\n");
    MovimentaBispo(5); // Chama a função adicionando 5 casas que serão movimentadas.
    printf("\n\n"); // Limpa a Tela



    // RAINHA:
    printf("MOVIMENTAÇÃO DO RAINHA, 8 CASAS PARA ESQUERDA:\n");
    MovimentaRainha(8); // Chama a função adicionando 8 casas que serão movimentadas.
    printf("\n\n");


    // CAVALO:
    printf("MOVIMENTAÇÃO DO CAVALO, 2 CASA PARA BAIXO, 1 PARA ESQUERDA:\n");
    for (int i = 0, x = 3; i <= 3; i++, x--)
    {   
        if(x > 1){
            printf("CIMA\n");
            continue;
        }
        if(i > 2){
            printf("DIREITA\nCAVALO\n");
            break;
        }
    }

    return 0;
}


