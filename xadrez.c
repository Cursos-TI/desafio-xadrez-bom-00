#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo com loops aninhados (vertical + horizontal)
void moverBispo(int vertical, int horizontalMax) {
    if (vertical == 0) return;
    for (int h = 0; h < horizontalMax; h++) {
        printf("Cima Direita\n");
        break; // simula movimento de 1 diagonal por chamada
    }
    moverBispo(vertical - 1, horizontalMax);
}

// Movimento do Cavalo com loops aninhados complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int direcoes[3] = {1, 1, 2}; // 1 = Cima, 2 = Direita

    for (int i = 0; i < 3; i++) {
        if (direcoes[i] == 1) {
            printf("Cima\n");
        } else if (direcoes[i] == 2) {
            printf("Direita\n");
        }
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, 1);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavalo();

    return 0;
}
