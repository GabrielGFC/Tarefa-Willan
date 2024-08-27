//Fa�a um programa em c que preencha tr�s vetores , cada vetor dever� conter a nota de cada uma das 3VAS do aluno no semestre. Calcule e mostre um vetor Media, que receber� a m�dia aritm�tica de cada aluno. A saber: Considere que um aluno como uma posi��o do vetor.
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"Portuguese");
// 3 vetores para 3 VAs e 3 alunos
int notas[3][3];
    int media[3];
    int i, j;

    // Preenchendo os vetores
    for (i = 0; i < 3; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Nota VA%d: ", j + 1);
            scanf("%d", &notas[j][i]);
        }
    }

    // Calculando a m�dia para cada aluno
    for (i = 0; i < 3; i++) {
        media[i] = (notas[0][i] + notas[1][i] + notas[2][i]) / 3;
    }

    // Mostrando o vetor de m�dias e status
    printf("\nM�dias dos alunos:\n");
    for (i = 0; i < 3; i++) {
        printf("Aluno %d: M�dia = %d - %s\n", i + 1, media[i], media[i] >= 60 ? "Aprovado" : "Reprovado");
    }
}

