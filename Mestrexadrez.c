#include <stdio.h>
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_CAVALO_VERT 2
#define MOV_CAVALO_HORIZ 1

// Funções recursivas
void moverTorre(int n) {
    if (n <= 0) return;
    printf("Direita\n");
    moverTorre(n - 1);
}

void moverBispo(int n) {
    if (n <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(n - 1);
}

void moverRainha(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");
    moverRainha(n - 1);
}

int main() {
    // Torre recursiva
    moverTorre(MOV_TORRE);
    printf("\n");

    // Bispo com loops aninhados
    for (int vert = 0; vert < MOV_BISPO; vert++) {
        for (int horiz = 0; horiz < 1; horiz++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // Rainha recursiva
    moverRainha(MOV_RAINHA);
    printf("\n");

    // Cavalo com loops complexos (continue/break)
    for (int i = 0; i < MOV_CAVALO_VERT * 2; i++) {
        if (i >= MOV_CAVALO_VERT) {
            printf("Direita\n");
            break;
        }
        printf("Cima\n");
    }

    return 0;
}
