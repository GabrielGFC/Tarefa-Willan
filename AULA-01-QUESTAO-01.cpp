/*
1	 adulta ou idosa. Considere que menores de idade t�m menos de 18 anos, adultos t�m entre 18 e 64 anos, e idosos t�m 65 anos ou mais.
*/

#include <math.h>
#include <locale.h>
#include <stdio.h>
//fun��o(programa)principal
main(){
	setlocale(LC_ALL,"Portuguese");
	//declara��o de vari�veis
	int idade;
	//Entrada de Dados
	printf("Digite a idade da Pessoa:");
	scanf("%i",&idade);
	//processamento dos dados e saida de dados
	if(idade >0 && idade < 18)
	 printf("\n A Pessoa � Adulta!!");
	else if (idade>=65)
		printf("\n A Pessoa � Idosa !!");
      else
      	printf("\n Erro de DIGITA��O DA IDADE !! ");
}
