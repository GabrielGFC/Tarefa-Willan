#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            vetor[i] = vetor[i] + 1;
        } else {
             vetor[i] = vetor[i] * 2;
           }
    }

    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }

    printf("%d", soma);
}

