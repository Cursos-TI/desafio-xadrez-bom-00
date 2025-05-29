/*
 * Simulação dos movimentos das peças de xadrez: Torre, Bispo, Rainha e Cavalo
 * Cada peça utiliza uma estrutura de repetição diferente
 */

#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita (usando for)
    const int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e direita (usando while)
    const int movimentoBispo = 5;
    int j = 0;
    printf("\nMovimento do Bispo:\n");
    while (j < movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha - 8 casas para a esquerda (usando do-while)
    const int movimentoRainha = 8;
    int k = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentoRainha);

    // Movimento do Cavalo - 2 para baixo e 1 para esquerda (usando for + while aninhado)
    const int movimentoCavaloBaixo = 2;
    const int movimentoCavaloEsquerda = 1;
    printf("\nMovimento do Cavalo:\n");

    for (int l = 0; l < movimentoCavaloBaixo; l++) {
        printf("Baixo\n");
        int m = 0;
        while (m < 1 && l == movimentoCavaloBaixo - 1) {
            printf("Esquerda\n");
            m++;
        }
    }

    return 0;
}

