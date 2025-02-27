#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;
    float altura, peso;
    int countIdadeSuperior50 = 0;
    int countIdade10a20 = 0;
    float somaAlturaIdade10a20 = 0;
    int countPesoInferior40 = 0;
    int totalPessoas = 5;

    for (int i = 0; i < totalPessoas; i++) {
        printf("Pessoa %d\n", i + 1);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);

        if (idade > 50) {
            countIdadeSuperior50++;
        }

        if (idade >= 10 && idade <= 20) {
            somaAlturaIdade10a20 += altura;
            countIdade10a20++;
        }

        if (peso < 40) {
            countPesoInferior40++;
        }
    }

    float mediaAlturaIdade10a20 = (countIdade10a20 > 0) ? (somaAlturaIdade10a20 / countIdade10a20) : 0;
    float porcentagemPesoInferior40 = (totalPessoas > 0) ? ((float)countPesoInferior40 / totalPessoas) * 100 : 0;

    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", countIdadeSuperior50);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n", mediaAlturaIdade10a20);
    printf("Porcentagem de pessoas com peso inferior a 40 kg: %.2f%%\n", porcentagemPesoInferior40);

}

