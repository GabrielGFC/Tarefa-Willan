//Faça um programa em C que preencha dois vetores de 10 elementos inteiros. Calcule e mostre um vetor resultante da intercalação dos dois vetores preenchidos.
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"Portuguese");

int vetor1[10], vetor2[10];
int i;
int resultado[20];
//CALCULO DO VETOR 1
 // Preenchendo o primeiro vetor
    printf("Digite 10 valores inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    // Preenchendo o segundo vetor
    printf("Digite 10 valores inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
 // Intercalando os vetores
    for (i = 0; i < 10; i++) {
        resultado[2 * i] = vetor1[i];
        resultado[2 * i + 1] = vetor2[i];
    }

    // Mostrando o vetor resultante
    printf("\nVetor resultante da intercalação dos dois vetores:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");
}
