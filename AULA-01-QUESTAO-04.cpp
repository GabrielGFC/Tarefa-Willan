/*
4.Escreva um programa que leia 10 n�meros e conte quantos deles s�o pares.
*/
#include <math.h>
#include <locale.h>
#include <stdio.h>
//fun��o(programa)principal
 main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, num; 
	int cont = 0;
    
    for (i = 1; i <= 10; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%i", &num);
        
        if (num % 2 == 0) 
            cont+=1;
    }   
    printf("\n\t Foram digitados %i numeros pares.", cont);
}

