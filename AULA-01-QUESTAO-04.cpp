/*
4.Escreva um programa que leia 10 números e conte quantos deles são pares.
*/
#include <math.h>
#include <locale.h>
#include <stdio.h>
//função(programa)principal
 main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, num; 
	int cont = 0;
    
    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%i", &num);
        
        if (num % 2 == 0) 
            cont+=1;
    }   
    printf("\n\t Foram digitados %i numeros pares.", cont);
}

