#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void bubbleSort(int v[], int n, long *c, long *m) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            (*c)++;
            if (v[j] > v[j + 1]) {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
                (*m)++;
            }
        }
    }
}

void selectionSort(int v[], int n, long *c, long *m) {
    int i, j, min, t;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            (*c)++;
            if (v[j] < v[min]) {
                min = j;
            }
        }
        t = v[min];
        v[min] = v[i];
        v[i] = t;
        (*m)++;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tamanhos[] = {100, 1000, 10000};
    int i, k, n;
    int *v;
    long c, m;
    clock_t ini, fim;
    double tempo;

    for (k = 0; k < 3; k++) {
        n = tamanhos[k];

        v = malloc(n * sizeof(int));
        for (i = 0; i < n; i++) v[i] = n - i;  
        c = 0; m = 0;
        ini = clock();
        bubbleSort(v, n, &c, &m);
        fim = clock();
        tempo = ((double)(fim - ini) / CLOCKS_PER_SEC) * 1000;

        printf("Algoritmo: Bubble Sort\n");
        printf("Tamanho: %d\n", n);
        printf("Tempo (ms): %.2f\n", tempo);
        printf("Comparações: %ld\n", c);
        printf("Movimentações: %ld\n\n", m);
        free(v);

        v = malloc(n * sizeof(int));
        for (i = 0; i < n; i++) v[i] = n - i;
        c = 0; m = 0;
        ini = clock();
        selectionSort(v, n, &c, &m);
        fim = clock();
        tempo = ((double)(fim - ini) / CLOCKS_PER_SEC) * 1000;

        printf("Algoritmo: Selection Sort\n");
        printf("Tamanho: %d\n", n);
        printf("Tempo (ms): %.2f\n", tempo);
        printf("Comparações: %ld\n", c);
        printf("Movimentações: %ld\n\n", m);
        free(v);
    }
}

