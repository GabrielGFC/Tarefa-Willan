/*
4.Escreva um programa que leia 10 números e conte quantos deles são pares.
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	
	int i, num;
	int cont = 0;
	
	for(i=0; i<10; i++){
		printf("Digite um Número. ");
		scanf("%i", &num);
		
		if(num %2 == 0)
			cont = cont + 1;
    }

	printf("\n Foram digitados %i Números Pares!",cont);
}