//Em uma máquina de autoatendimento bancário, um cliente pode realizar saques em dinheiro.Considerando que a máquina dispõe de cédulas de 2, 5, 10, 20 e 50 reais.Faça um programa em C para receber como entrada o saldo da conta do cliente e o valor desejado do saque e, caso o cliente tenha saldo suficiente e o valor do saque seja compatível com as notas disponíveis na máquina ATM, determinar quantas notas de cada valor o cliente deve receber e informar o novo saldo.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibirNotas(int notas_50, int notas_20, int notas_10, int notas_5, int notas_2);
float calcularNovoSaldo(float saldo, int notas_50, int notas_20, int notas_10, int notas_5, int notas_2);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float saldo, saque;

    printf("Informe o saldo da conta: R$ ");
    scanf("%f", &saldo);

    printf("Informe o valor do saque: R$ ");
    scanf("%f", &saque);

    if (saque > saldo) {
        printf("Erro: Saldo insuficiente para realizar o saque.\n");
        return 1;
    }

    if ((int)saque % 2 != 0) {
        printf("Erro: O valor do saque deve ser um múltiplo de 2.\n");
        return 1;
    }

    int notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0;

    while (saque > 0) {
        if (saque >= 50) {
            notas_50++;
            saque -= 50;
        } else if (saque >= 20) {
            notas_20++;
            saque -= 20;
        } else if (saque >= 10) {
            notas_10++;
            saque -= 10;
        } else if (saque >= 5) {
            notas_5++;
            saque -= 5;
        } else if (saque >= 2) {
            notas_2++;
            saque -= 2;
        }
    }

    exibirNotas(notas_50, notas_20, notas_10, notas_5, notas_2);
    saldo = calcularNovoSaldo(saldo, notas_50, notas_20, notas_10, notas_5, notas_2);
    printf("\nNovo saldo: R$ %.2f\n", saldo);

    return 0;
}

void exibirNotas(int notas_50, int notas_20, int notas_10, int notas_5, int notas_2) {
    printf("\nNotas a serem entregues:\n");
    printf("Notas de R$ 50: %d\n", notas_50);
    printf("Notas de R$ 20: %d\n", notas_20);
    printf("Notas de R$ 10: %d\n", notas_10);
    printf("Notas de R$ 5: %d\n", notas_5);
    printf("Notas de R$ 2: %d\n", notas_2);
}


float calcularNovoSaldo(float saldo, int notas_50, int notas_20, int notas_10, int notas_5, int notas_2) {
    return saldo - (notas_50 * 50 + notas_20 * 20 + notas_10 * 10 + notas_5 * 5 + notas_2 * 2);
}
