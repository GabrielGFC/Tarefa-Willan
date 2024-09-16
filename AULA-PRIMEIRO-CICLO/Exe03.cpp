/*
3.Escreva um programa que calcule a soma dos números de 1 a 100.
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
// percebam que o enunciado do exercício já nos dá a informação que precisamos.

   int i;
   int soma = 0;
   
   for(i=1; i<=100; i++){
   	  soma = soma + i;
	  //printf("\n --> %i",soma);	
   }
   
   printf("\n  A soma dos valores de 1 até 100 é: %i",soma)	;
}