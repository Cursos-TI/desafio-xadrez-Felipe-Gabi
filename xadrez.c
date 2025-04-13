#include <stdio.h>

// Constantes de movimento
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO 1  // Apenas 1 movimento em L

// Função recursiva para movimentação da Torre
void moverTorre(int passo) {
    if (passo == 0) return;
    printf("Direita\n");
    moverTorre(passo - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int passo) {
    if (passo == 0) return;
    printf("Esquerda\n");
    moverRainha(passo - 1);
}

int main() {
    // --------------------------------------------------------------
    // Movimentação do Bispo: 5 casas na diagonal direita para cima
    // Usando loops aninhados obrigatoriamente
    // --------------------------------------------------------------
    printf("Movimentacao do Bispo (Diagonal Direita para Cima):\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    // --------------------------------------------------------------
    // Movimentação da Torre: 5 casas para a direita (função recursiva)
    // --------------------------------------------------------------
    printf("\nMovimentacao da Torre (Direita):\n");
    moverTorre(MOVIMENTO_TORRE);

    // --------------------------------------------------------------
    // Movimentação da Rainha: 8 casas para a esquerda (função recursiva)
    // --------------------------------------------------------------
    printf("\nMovimentacao da Rainha (Esquerda):\n");
    moverRainha(MOVIMENTO_RAINHA);

    // --------------------------------------------------------------
    // Movimentação do Cavalo: 1 vez em L para cima e para a direita
    // Usando loop com múltiplas variáveis e condições + continue/break
    // --------------------------------------------------------------
    printf("\nMovimentacao do Cavalo (L para Cima e Direita):\n");

    int movimentos = 0;
    for (int i = 0, cima = 0, direita = 0; i < 3; i++) {
        if (movimentos >= 3) break;  // L tem 3 movimentos

        if (i < 2) {
            cima++;
            printf("Cima\n");
        } else if (i == 2) {
            direita++;
            printf("Direita\n");
        }

        movimentos++;

        // Exemplo de uso de `continue`
        if (cima == 2 && direita == 0) {
            continue;
        }
    }

    return 0;
}
