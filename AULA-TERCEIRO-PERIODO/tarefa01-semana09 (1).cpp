#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n1, int n2) {
    return n1 + n2;
}

int subtracao(int n1, int n2) {
    return n1 - n2;
}

int multi(int n1, int n2) {
    return n1 * n2;
}

int divisao(int n1, int n2) {
    return n1 / n2;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    
    printf("A soma é: %d\n", soma(n1, n2));
    printf("A subtração é: %d\n", subtracao(n1, n2));
    printf("A multiplicação é: %d\n", multi(n1, n2));
    printf("A divisão é: %d\n", divisao(n1, n2));
}

