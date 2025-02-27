#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int *vetor;
    int tamanho;
    float media = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int*) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        perror("Erro na alocação de memória");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        media += vetor[i];
    }
    media /= tamanho;

    printf("A media dos numeros e: %.2f\n", media);

    free(vetor);
    vetor = NULL;

    return 0;
}
