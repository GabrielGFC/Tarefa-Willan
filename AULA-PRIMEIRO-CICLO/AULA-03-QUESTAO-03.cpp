#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char codigo;
    float valor;
    float totalVista = 0;
    float totalPrazo = 0;
    float totalGeral = 0;
    float valorPrimeiraParcela;
    int numTransacoes = 15;

    for (int i = 0; i < numTransacoes; i++) {
        printf("Digite o c�digo da transa��o (V para � vista, P para a prazo): ");
        scanf(" %c", &codigo);

        printf("Digite o valor da transa��o: ");
        scanf("%f", &valor);

        if (codigo == 'V' || codigo == 'v') {
            totalVista += valor;
        } else if (codigo == 'P' || codigo == 'p') {
            totalPrazo += valor;
        } else {
            printf("C�digo inv�lido. Tente novamente.\n");
            i--;
            continue;
        }

        totalGeral += valor;
    }

    if (totalPrazo > 0) {
        valorPrimeiraParcela = totalPrazo / 3;
    } else {
        valorPrimeiraParcela = 0;
    }

    printf("Total das compras � vista: %.2f\n", totalVista);
    printf("Total das compras a prazo: %.2f\n", totalPrazo);
    printf("Total das compras efetuadas: %.2f\n", totalGeral);
    printf("Valor da primeira presta��o das compras a prazo (em tr�s vezes): %.2f\n", valorPrimeiraParcela);
}
