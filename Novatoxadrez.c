#include <stdio.h>

int main() {
    // Torre - 5 casas para direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo - 5 casas na diagonal
    int contador = 0;
    while (contador < 5) {
        printf("Cima, Direita\n");
        contador++;
    }
    printf("\n");

    // Rainha - 8 casas para esquerda
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < 8);

    return 0;
}
