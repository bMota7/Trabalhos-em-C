#include <stdio.h>
#include <locale.h>

int main() {

    float natalidade, mortalidade, numCriancas, numHabitantes, numMortos;

    setlocale(LC_ALL, "Portuguese");

    printf("Este programa calcula a taxa de natalidade e mortalidade de uma cidade.\n");
    printf("Informe o número de crianças nascidas, o número de óbitos e o número de habitantes da cidade:\n");

    printf("Número de crianças nascidas: ");
    scanf("%f", &numCriancas);

    printf("Número de habitantes: ");
    scanf("%f", &numHabitantes);

    while (numHabitantes <= 0) {
        printf("O número de habitantes deve ser maior que zero. Informe um valor válido: ");
        scanf("%f", &numHabitantes);
    }

    printf("Número de óbitos: ");
    scanf("%f", &numMortos);

    while (numCriancas < 0 || numMortos < 0) {
        printf("Os números de crianças nascidas e óbitos devem ser maiores ou iguais a zero. Informe valores válidos:\n");

        printf("Número de crianças nascidas: ");
        scanf("%f", &numCriancas);

        printf("Número de óbitos: ");
        scanf("%f", &numMortos);
    }

    natalidade = (numCriancas * 1000) / numHabitantes;
    mortalidade = (numMortos * 1000) / numHabitantes;

    printf("A taxa de natalidade por mil habitantes é: %.3f\n", natalidade);
    printf("A taxa de mortalidade por mil habitantes é: %.3f\n", mortalidade);

    return 0;
}