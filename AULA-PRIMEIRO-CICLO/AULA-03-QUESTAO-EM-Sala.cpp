#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mat1[2][2] = {1, 2,3, 4};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    char str1[10] = {'J','o','a','o','\0'};
    char str2[10] = "joao";

    char strm[3][10] = {"joao", "maria", "jose"};

    printf("Matriz 1, Elemento [0][0]: %d\n", mat1[0][0]);
    
}
