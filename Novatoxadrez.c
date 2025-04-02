#include <stdio.h>
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8

int main() {
    // Torre - for
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo - while (diagonal combinada)
    int mov_bispo = 0;
    while (mov_bispo < MOV_BISPO) {
        printf("Cima, Direita\n");
        mov_bispo++;
    }
    printf("\n");

    // Rainha - do-while
    int mov_rainha = 0;
    do {
        printf("Esquerda\n");
        mov_rainha++;
    } while (mov_rainha < MOV_RAINHA);

    return 0;
}
