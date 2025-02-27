
#include <stdio.h>

float calcularMedia(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float)soma / tamanho;
}

int main() {
    // Exercício 4: Calculando a média dos elementos de um array
    int numeros[5] = {10, 20, 30, 40, 50};
    
    printf("Exercício 4: Média dos Elementos do Array
");
    float media = calcularMedia(numeros, 5);
    printf("A média dos elementos do array é: %.2f
", media);
    
    return 0;
}
