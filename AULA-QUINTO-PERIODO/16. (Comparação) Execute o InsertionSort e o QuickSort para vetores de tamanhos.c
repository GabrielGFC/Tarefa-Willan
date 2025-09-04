#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

void copyArray(int *source, int *dest, int n) {
    for (int i = 0; i < n; i++)
        dest[i] = source[i];
}

int main() {
    int sizes[] = {100, 500, 1000, 5000, 10000, 20000};
    int numSizes = sizeof(sizes) / sizeof(sizes[0]);

    printf("%-10s %-15s %-15s\n", "Tamanho", "InsertionSort(ms)", "QuickSort(ms)");

    for (int k = 0; k < numSizes; k++) {
        int n = sizes[k];
        int *original = malloc(n * sizeof(int));
        int *arrInsertion = malloc(n * sizeof(int));
        int *arrQuick = malloc(n * sizeof(int));

        // Gera vetor aleatório
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            original[i] = rand() % 100000;
        }

        copyArray(original, arrInsertion, n);
        copyArray(original, arrQuick, n);

        clock_t start, end;
        double timeInsertion, timeQuick;

        // Testa InsertionSort
        start = clock();
        insertionSort(arrInsertion, n);
        end = clock();
        timeInsertion = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

        // Testa QuickSort
        start = clock();
        quickSort(arrQuick, 0, n - 1);
        end = clock();
        timeQuick = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

        printf("%-10d %-15.2f %-15.2f\n", n, timeInsertion, timeQuick);

        free(original);
        free(arrInsertion);
        free(arrQuick);
    }

    return 0;
}
