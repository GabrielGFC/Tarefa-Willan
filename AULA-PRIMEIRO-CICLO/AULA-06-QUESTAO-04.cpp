#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4];
    int maior = -2147483648;
    int linha_maior = 0, coluna_maior = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Maior valor: %d\n", maior);
    printf("Localização: Linha %d, Coluna %d\n", linha_maior, coluna_maior);
    
}

