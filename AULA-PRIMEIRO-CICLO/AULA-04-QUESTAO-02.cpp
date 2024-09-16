#include <stdio.h>
#include <stdlib.h>

int main() {
    int valores[6];
    
    // Leitura dos 6 valores
    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }
    
    // Mostrar os valores lidos
    printf("Valores lidos:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }
}

