
#include <stdio.h>

void explicarEscopo() {
    // Exercício 3: Explicação sobre escopo de variável estática
    
    // Uma variável estática em C mantém seu valor entre as chamadas de função,
    // mesmo que a função seja chamada várias vezes. Ela é inicializada apenas uma vez.
    
    static int contador = 0;  // Variável estática
    contador++;
    
    printf("Exercício 3: Escopo de variável estática
");
    printf("Contador estático (valor após %d chamadas): %d
", contador, contador);
}

int main() {
    explicarEscopo();
    explicarEscopo();
    explicarEscopo();
    
    return 0;
}
