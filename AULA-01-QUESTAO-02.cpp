/*
2.Escreva um programa que leia um n�mero e determine se ele � positivo, negativo ou zero.
*/
#include <math.h>
#include <locale.h>
#include <stdio.h>
//fun��o(programa)principal
main(){
	setlocale(LC_ALL,"Portuguese");
	float num;
	printf("digite um numero :");
	scanf("%f",&num);
	
if (num< 0.0)
	printf("\n O n�mero digitado e um numero Negativo");
else if (num >0.0)
		printf("\n o n�mero digitado e um nuemro Positivo");
	else
		printf("\n O numero digitado � Zero(0)");
	}
