/*
1.Escreva um programa que leia a idade de uma pessoa e informe se ela é menor de idade, adulta ou idosa. 
Considere que menores de idade têm menos de 18 anos, adultos têm entre 18 e 64 anos, e idosos têm 65 anos ou mais.
*/
#include<stdio.h>
#include<math.h>
#include<locale.h>


main(){
	
	setlocale(LC_ALL,"Portuguese");
	int id;
	
	printf("Digite a Idade da Pessoa: ");
	scanf("%i", &id);
	
	if(id > 0 && id < 18)
		printf("A Pessoa é Menor de Idade");
	else if(id >= 18 && id < 64)
			printf("A Pessoa é Adulta");
		  else if(id >= 65)
		  		  printf("A Pessoa é Idosa(o)");

	
}