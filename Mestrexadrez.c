#include <stdio.h>

// Função recursiva para Torre
void moverTorre(int n) {
    if (n <= 0) return;
    printf("Direita\n");
    moverTorre(n - 1);
}

// Função recursiva para Bispo
void moverBispo(int n) {
    if (n <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(n - 1);
}

// Função recursiva para Rainha
void moverRainha(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");
    moverRainha(n - 1);
}

int main() {
    // Torre recursiva
    moverTorre(5);
    printf("\n");

    // Bispo com loops aninhados
    for (int i = 0; i < 5; i++) {
        printf("Cima, Direita\n");
    }
    printf("\n");

    // Rainha recursiva
    moverRainha(8);
    printf("\n");

    // Cavalo com movimento complexo
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");

    return 0;
}
