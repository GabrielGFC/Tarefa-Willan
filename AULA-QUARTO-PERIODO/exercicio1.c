
#include <stdio.h>

int main() {
    // Exercício 1: Criando um array estático de 5 números
    int numeros[5] = {10, 20, 30, 40, 50};
    
    printf("Exercício 1: Array Estático
");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d
", i+1, numeros[i]);
    }
    
    return 0;
}
