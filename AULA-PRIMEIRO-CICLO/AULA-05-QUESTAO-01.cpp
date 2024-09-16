#include <stdio.h>
#include <locale.h>

#define SIZE 5

void preencherMatriz(int M[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

int encontrarMenorValor(int M[SIZE][SIZE]) {
    int menorValor = M[0][0];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (M[i][j] < menorValor) {
                menorValor = M[i][j];
            }
        }
    }
    return menorValor;
}

int somaDiagonalPrincipal(int M[SIZE][SIZE]) {
    int soma = 0;
    for (int i = 0; i < SIZE; i++) {
        soma += M[i][i];
    }
    return soma;
}

void multiplicarMatriz(int M[SIZE][SIZE], int R[SIZE][SIZE], int menorValor) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R[i][j] = M[i][j] * menorValor;
        }
    }
}

void imprimirMatriz(int R[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int M[SIZE][SIZE], R[SIZE][SIZE];
    
    printf("Preencha a matriz 5x5 com números inteiros:\n");
    preencherMatriz(M);

    int menorValor = encontrarMenorValor(M);

    int somaDiagonal = somaDiagonalPrincipal(M);

    multiplicarMatriz(M, R, menorValor);

    printf("\nMatriz R (elementos de M multiplicados pelo menor valor %d):\n", menorValor);
    imprimirMatriz(R);

    printf("\nSoma dos elementos da diagonal principal da matriz M: %d\n", somaDiagonal);

    return 0;
}

