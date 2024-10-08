#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num_versoes, i, bugs, total_bugs = 0;
    
    printf("Quantas vers�es de software? ");
    scanf("%d", &num_versoes);
    
    for (i = 1; i <= num_versoes; i++) {
        printf("Quantos bugs foram encontrados na vers�o %d? ", i);
        scanf("%d", &bugs);
        if (bugs < 0) {
            printf("Erro: O n�mero de bugs n�o pode ser negativo. Tente novamente.\n");
            i--;
            continue;
        }
        total_bugs += bugs;
    }

    printf("\nTotal de bugs encontrados em todas as vers�es: %d\n", total_bugs);
}

