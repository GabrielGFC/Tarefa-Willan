//Faça um programa em c que preencha um vetor com 9 números inteiros. Calcule e mostre os números primos e as posições(índices) onde eles foram inseridos.

#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"Portuguese");
int vet[9];
int  i,j,vnum[9];
int sm;
//CALCULO DO VETOR
	for (i=0; i<9; i++){
		printf("digite um valor inteiro:");
		scanf("%i",&vnum[i]);
	}
//calculando primo
	for(i=0;i<9;i++){
		sm=0;
		for(j=1;j<=vnum[i];j++){
			if(vnum[i] % j==0)
				sm++;	
		}
//POSICAO DOS INDECES E ONDE FORAM INSERIDOS
		if (sm==2)
 		 printf("\n o numero %i e primo e esta na possicao %i",vnum[i],i);
	}
}