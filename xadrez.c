#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    int i;

    // =======================
    // Movimento da TORRE (FOR)
    // =======================
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // ========================
    // Movimento do BISPO (WHILE)
    // ========================
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    i = 0;
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ============================
    // Movimento da RAINHA (DO-WHILE)=
    // ============================
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentoRainha);

    return 0;
}
