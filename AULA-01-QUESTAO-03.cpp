/*
3.Escreva um programa que calcule a soma dos números de 1 a 100.
*/
#include <math.h>
#include <locale.h>
#include <stdio.h>
//função(programa)principal
main() {
    
	setlocale(LC_ALL, "Portuguese");
    int i, soma ;
    soma = 0;

    for(i =1; i<= 100;i++){
        soma = soma+i;//soma+=i;
        printf("\n --->%i",soma);
    }
    printf("\n\n\t A soma dos valores de 1 a 100 é %i",soma);
}
