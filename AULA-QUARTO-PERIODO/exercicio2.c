
#include <stdio.h>

int main() {
    // Exercício 2: Criando uma matriz estática 2x2
    int matriz[2][2] = {{1, 2}, {3, 4}};
    int soma = 0;
    
    printf("Exercício 2: Matriz 2x2
");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            soma += matriz[i][j];
        }
    }
    
    printf("A soma dos elementos da matriz é: %d
", soma);
    
    return 0;
}
