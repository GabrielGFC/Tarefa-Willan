#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4];
    int count = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                count++;
            }
        }
    }

    printf("Número de valores maiores que 10: %d\n", count);
}

