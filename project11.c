#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num, cont1 = 0, cont2 = 0, cont3 = 0;

    printf("Informe um números positivos entre 0  e 40 ou negativo para interromper e sair!");

    while (1) {

        printf("Informe o número: \n");
        scanf("%d", &num);

        if (num < 0) {
            break;
        } else if (num >=0 && num <= 20) {
            cont1++;
        } else if (num >= 21 && num <= 30) {
            cont2++;
        } else if (num >= 31 && num <= 40) {
            cont3++;
        }

    }

    printf("Números no intervalo de 0 a 20: %d\n", cont1);
    printf("Números no intervalo de 21 a 30: %d\n", cont2);
    printf("Números no intervalo de 31 a 40: %d\n", cont3);

}