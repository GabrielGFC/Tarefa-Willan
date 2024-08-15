/*
1	 adulta ou idosa. Considere que menores de idade têm menos de 18 anos, adultos têm entre 18 e 64 anos, e idosos têm 65 anos ou mais.
*/

#include <math.h>
#include <locale.h>
#include <stdio.h>
//função(programa)principal
main(){
	setlocale(LC_ALL,"Portuguese");
	//declaração de variáveis
	int idade;
	//Entrada de Dados
	printf("Digite a idade da Pessoa:");
	scanf("%i",&idade);
	//processamento dos dados e saida de dados
	if(idade >0 && idade < 18)
	 printf("\n A Pessoa é Adulta!!");
	else if (idade>=65)
		printf("\n A Pessoa é Idosa !!");
      else
      	printf("\n Erro de DIGITAÇÃO DA IDADE !! ");
}
