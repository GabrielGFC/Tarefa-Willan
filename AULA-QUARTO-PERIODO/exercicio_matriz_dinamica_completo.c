#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int **matriz;
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    matriz = (int**) malloc(linhas * sizeof(int*));

    if (matriz == NULL) {
        perror("Erro na alocacao de memoria");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            perror("Erro na alocacao de memoria para a coluna");
            exit(EXIT_FAILURE);
        }
    }

    srand(time(0));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < linhas; i++) {
        int maior = matriz[i][0];
        for (int j = 1; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        printf("O maior valor da linha %d e: %d\n", i + 1, maior);
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}
