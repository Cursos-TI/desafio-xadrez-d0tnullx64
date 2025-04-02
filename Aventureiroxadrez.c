#include <stdio.h>

int main() {
    // Torre
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo
    int contador = 0;
    while (contador < 5) {
        printf("Cima, Direita\n");
        contador++;
    }
    printf("\n");

    // Rainha
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < 8);
    printf("\n");

    // Cavalo - movimento em L
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    printf("Esquerda\n");

    return 0;
}
