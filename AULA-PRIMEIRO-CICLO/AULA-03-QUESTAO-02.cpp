#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    for (int num = 1; num <= 10; num++) {
        printf("Tabuada do %d:\n", num);
        for (int i = 0; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n");
    }
}

