#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

