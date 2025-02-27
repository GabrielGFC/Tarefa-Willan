#include <stdio.h>
#include <math.h>
#include <locale.h>

float delta(int a, int b, int c) {
    return (b * b) - (4 * a * c);
}

void calcularRaizes(int a, int b, int c) {
    float d = delta(a, b, c);
    
    if (d < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (d == 0) {
        float x = -b / (2.0 * a);
        printf("A equação possui uma raiz real: X' = X'' = %.2f\n", x);
    } else {
        float x1 = (-b + sqrt(d)) / (2.0 * a);
        float x2 = (-b - sqrt(d)) / (2.0 * a);
        printf("As raízes da equação são: X' = %.2f e X'' = %.2f\n", x1, x2);
    }
}

int main() {
    int a, b, c;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o coeficiente a: ");
    scanf("%d", &a);
    
    printf("Digite o coeficiente b: ");
    scanf("%d", &b);
    
    printf("Digite o coeficiente c: ");
    scanf("%d", &c);
    
    calcularRaizes(a, b, c);
    
    return 0;
}

