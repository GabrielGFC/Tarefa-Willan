#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[10];
    float quadrado[10];
    
    printf("Digite 10 valores reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        quadrado[i] = vet[i] * vet[i];
    }
    
    printf("Valores originais:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", vet[i]);
    }
    
    printf("Quadrados dos valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", quadrado[i]);
    }
}

