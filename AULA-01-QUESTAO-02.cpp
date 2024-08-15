/*
2.Escreva um programa que leia um número e determine se ele é positivo, negativo ou zero.
*/
#include <math.h>
#include <locale.h>
#include <stdio.h>
//função(programa)principal
main(){
	setlocale(LC_ALL,"Portuguese");
	float num;
	printf("digite um numero :");
	scanf("%f",&num);
	
if (num< 0.0)
	printf("\n O número digitado e um numero Negativo");
else if (num >0.0)
		printf("\n o número digitado e um nuemro Positivo");
	else
		printf("\n O numero digitado é Zero(0)");
	}
