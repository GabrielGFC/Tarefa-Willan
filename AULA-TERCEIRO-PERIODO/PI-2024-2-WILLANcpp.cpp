#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5
#define MAX_NOME 50

// Função para ordenar os alunos com base nas notas
void ordenarAlunos(float notas[], char nomes[][MAX_NOME], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (notas[j] < notas[j + 1]) { // Ordenar em ordem decrescente
                // Trocar notas
                float tempNota = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = tempNota;

                // Trocar nomes correspondentes
                char tempNome[MAX_NOME];
                strcpy(tempNome, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], tempNome);
            }
        }
    }
}

// Função para buscar um aluno pelo nome
int buscarAluno(char nomes[][MAX_NOME], char nomeBusca[], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nomes[i], nomeBusca) == 0) {
            return i; // Retorna o índice do aluno encontrado
        }
    }
    return -1; // Retorna -1 se não encontrar
}

int main() {
    char alunos[MAX_ALUNOS][MAX_NOME];
    float notas[MAX_ALUNOS];
    int n = 0;

    // Entrada de dados
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite o nome do aluno %d (ou 'sair' para encerrar): ", i + 1);
        fgets(alunos[i], MAX_NOME, stdin);
        alunos[i][strcspn(alunos[i], "\n")] = '\0'; // Remover nova linha

        if (strcmp(alunos[i], "sair") == 0) {
            break;
        }

        printf("Digite a nota de %s: ", alunos[i]);
        scanf("%f", &notas[i]);
        getchar(); // Limpar o buffer do teclado
        n++;
    }

    // Ordenar os alunos
    ordenarAlunos(notas, alunos, n);
    
    // Exibir alunos ordenados
    printf("\nAlunos ordenados por nota:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %.2f\n", alunos[i], notas[i]);
    }

    // Busca de aluno
    char nomeBusca[MAX_NOME];
    printf("\nDigite o nome do aluno para buscar: ");
    fgets(nomeBusca, MAX_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0'; // Remover nova linha

    int indice = buscarAluno(alunos, nomeBusca, n);
    if (indice != -1) {
        printf("Aluno encontrado: %s com nota %.2f\n", alunos[indice], notas[indice]);
    } else {
        printf("Aluno não encontrado.\n");
    }

    return 0;
}

