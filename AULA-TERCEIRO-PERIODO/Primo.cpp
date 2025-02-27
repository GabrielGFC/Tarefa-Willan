#include <stdio.h>

int main() {
    int vetor[19];
    int i, j, ehPrimo;

    // Preenchendo o vetor com 9 números inteiros
    printf("Digite 9 números inteiros:\n");
    for (i = 0; i < 19; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verificando quais números são primos e mostrando a posição
    printf("\nNúmeros primos e suas posições no vetor:\n");
    for (i = 0; i < 19; i++) {
        if (vetor[i] > 1) {  // Números menores ou iguais a 1 não são primos
            ehPrimo = 1; // Inicializa como verdadeiro
            for (j = 2; j * j <= vetor[i]; j++) { // Verifica se é divisível por algum número além de 1 e ele mesmo
            	printf("\n----> %i ",j);
                if (vetor[i] % j == 0) {
                    ehPrimo = 0; // Não é primo
                    break;
                }
            }
            if (ehPrimo) {
                printf("\nNúmero primo %d na posição %d\n", vetor[i], i);
            }
        }
    }

    return 0;
}
