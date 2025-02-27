#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int x;
    int encontrado = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado na matriz:\n");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                printf("Valor encontrado na posição: Linha %d, Coluna %d\n", i, j);
                encontrado = 1;
                break;
            }
        }
        if (encontrado) break;
    }

    if (!encontrado) {
        printf("Valor não encontrado na matriz.\n");
    }

    return 0;
}

