#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i = 1, num;

    printf("Informe um número: \n");
    scanf("%d", &num);

    while (i <= 9) {
        printf("%d x %d = %d\n", i, num, num*i);
        i++;
    }

}