#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float s1, s2, salario, salarioFinal;

    printf("Informe o seu salário: \n");
    scanf("%f", &salario);

    while (salario < 0) {
        printf("Informe um valor válido: \n");
        scanf("%f", &salario);
    }

    salarioFinal = salario * 1.05;
    //s2 = salario * 1.07;
    //salarioFinal = s1 + salario;

    printf("Seu salário final é de: %.2f", salarioFinal);

    return 0;

}