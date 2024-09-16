#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int vnum[9], i, j;
	int cont;
	// Preenchendo o vetor com 9 números inteiros
    printf("Digite 9 números inteiros:\n");
    for (i = 0; i < 9; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vnum[i]);
    }
    
    for(i = 0; i < 9; i++){
    	cont = 0;
    	for(j=1;  j<=vnum[i]; j++){// Verifica se é divisível por algum número além de 1 e ele mesmo
    		if(vnum[i] % j == 0){
    			cont++;
			}
		}
    	if(cont == 2){
				printf("\n %d  é primo na posição %d", vnum[i], i);
		}
	}
	
}