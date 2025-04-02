#include <stdio.h>
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_CAVALO_VERT 2
#define MOV_CAVALO_HORIZ 1

int main() {
    // Torre - for
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo - while
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
    printf("\n");

    // Cavalo - loops aninhados (for + while)
    for (int i = 0; i < MOV_CAVALO_VERT; i++) {
        printf("Baixo\n");
    }
    int mov_lateral = 0;
    while (mov_lateral < MOV_CAVALO_HORIZ) {
        printf("Esquerda\n");
        mov_lateral++;
    }

    return 0;
}
