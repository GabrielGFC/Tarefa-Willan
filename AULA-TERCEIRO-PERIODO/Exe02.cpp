/*
2.Escreva um programa que leia um número e determine se ele é positivo, negativo ou zero.
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	
    float num;
    
    printf("Digite um Número. ");
	scanf("%f", &num);
	
	if(num < 0.0)
		printf("\n Número Negativo");
	else
		printf("\n Numero Positivo");
}