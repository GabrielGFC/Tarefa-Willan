#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 0; // Inicialização correta das variáveis
    if (a > b) {
        c = a + b; // Se a for maior que b, c recebe a + b
    } else if (b > a && b < 30) {
        c = b - a; // Se a é verdadeiro (não zero) e b é menor que 30, c recebe a
    } else {
        c =a* b; // Caso contrário, c recebe b
    }

    c += (a < 15); // Incrementa c se a for menor que 15
    printf("%d\n", c); // Imprime o valor de c

}

