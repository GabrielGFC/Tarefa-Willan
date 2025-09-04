#include <stdio.h>

void printArray(const int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int v[] = {5, 3, 8, 1, 2};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Array: ");
    printArray(v, n);

    return 0;
}
