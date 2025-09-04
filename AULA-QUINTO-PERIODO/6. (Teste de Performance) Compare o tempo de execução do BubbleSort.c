#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int v[], int n, long *comparacoes, long *movimentacoes) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        int trocou = 0;
        for (j = 0; j < n - 1 - i; j++) {
            (*comparacoes)++;
            if (v[j] > v[j + 1]) {
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                (*movimentacoes)++;
                trocou = 1;
            }
        }
        if (!trocou) break;
    }
}

void selectionSort(int v[], int n, long *comparacoes, long *movimentacoes) {
    int i, j, min, tmp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            (*comparacoes)++;
            if (v[j] < v[min]) {
                min = j;
            }
        }
        if (min != i) {
            tmp = v[min];
            v[min] = v[i];
            v[i] = tmp;
            (*movimentacoes)++;
        }
    }
}

int main() {
    int tamanhos[] = {100, 1000, 10000};
    int numTamanhos = sizeof(tamanhos) / sizeof(tamanhos[0]);

    printf("%-15s %-10s %-13s %-15s %-15s\n", "Algoritmo", "Tamanho", "Tempo (ms)", "Comparações", "Movimentações");
    printf("-------------------------------------------------------------------------------\n");

    for (int a = 0; a < numTamanhos; a++) {
        int n = tamanhos[a];
        int *v = malloc(n * sizeof(int));
        if (!v) {
            printf("Erro ao alocar memória para tamanho %d\n", n);
            return 1;
        }

        // Preenche vetor em ordem decrescente
        for (int i = 0; i < n; i++) {
            v[i] = n - i;
        }

        // Bubble Sort
        long comparacoes = 0, movimentacoes = 0;
        clock_t ini = clock();
        bubbleSort(v, n, &comparacoes, &movimentacoes);
        clock_t fim = clock();
        double tempo = ((double)(fim - ini) / CLOCKS_PER_SEC) * 1000.0;
        printf("%-15s %-10d %-13.2f %-15ld %-15ld\n", "Bubble Sort", n, tempo, comparacoes, movimentacoes);
        free(v);

        // Recria vetor para Selection Sort
        v = malloc(n * sizeof(int));
        if (!v) {
            printf("Erro ao alocar memória para tamanho %d\n", n);
            return 1;
        }
        for (int i = 0; i < n; i++) {
            v[i] = n - i;
        }

        // Selection Sort
        comparacoes = movimentacoes = 0;
        ini = clock();
        selectionSort(v, n, &comparacoes, &movimentacoes);
        fim = clock();
        tempo = ((double)(fim - ini) / CLOCKS_PER_SEC) * 1000.0;
        printf("%-15s %-10d %-13.2f %-15ld %-15ld\n", "Selection Sort", n, tempo, comparacoes, movimentacoes);
        free(v);
    }
    return 0;
}
