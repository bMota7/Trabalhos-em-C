#include <stdio.h>

int main() {

    int i, j;

    // loop para percorrer as linhas (de 1 a 9)
    for (i = 1; i <= 9; i++) {
        // loop para percorrer as colunas (de 1 a 10)
        for (j = 1; j <= 10; j++) {
            // imprime o resultado da multiplicação
            printf("%d x %d = %d\n", i, j, i * j);
        }
        // pula uma linha ao final de cada linha da tabela
        printf("\n");
    }

    return 0;

}