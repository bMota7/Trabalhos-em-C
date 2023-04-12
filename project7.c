#include <stdio.h>
#include <math.h>

int main() {

    float num1, num2;
    
    printf("Digite dois números: \n");
    scanf("%f\n %f", &num1, &num2);

    float soma = num1 + num2;
    float produto = num1 * pow(num2, 2);
    float quadrado1 = pow(num1, 2);
    float raiz = sqrt(pow(num1, 2) + pow(num2, 2));
    float seno = sin(num1 - num2);
    float modulo = fabs(num1);

    printf("A soma dos números é: %.2f", soma);
    printf("O produto do primeiro número pelo quadrado do segundo é: %.2f", produto);
    printf("O quadrado do primeiro número é: %.2f", quadrado1);
    printf("A raiz quadrada da soma dos números é: %.2f", raiz);
    printf("O seno da diferença do primeiro pelo segundo é: %.2f", seno);
    printf("O módulo do primeiro número é: %.2f", modulo);

    return 0;

}