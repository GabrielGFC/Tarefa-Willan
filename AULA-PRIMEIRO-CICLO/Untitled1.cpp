#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 0; // Inicializa��o correta das vari�veis
    if (a > b) {
        c = a + b; // Se a for maior que b, c recebe a + b
    } else if (b > a && b < 30) {
        c = b - a; // Se a � verdadeiro (n�o zero) e b � menor que 30, c recebe a
    } else {
        c =a* b; // Caso contr�rio, c recebe b
    }

    c += (a < 15); // Incrementa c se a for menor que 15
    printf("%d\n", c); // Imprime o valor de c

}

