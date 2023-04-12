#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int cont = 1, dia;
    float num1, num2, media;

    while (cont <= 5) {

        printf("Informe a primeira nota: \n");
        scanf("%f", &num1);

        printf("Informe a segunda nota: \n");
        scanf("%f", &num2);

        while (num1 < 0 || num2 < 0)
        {

            printf("Informe um valor válido!");
            scanf("%f\n %f", &num1, &num2);
            
        }

        media = (num1 + num2)/2;

        if (media >= 7) {

            printf("Parabéns, você foi aprovado! Nota: %.2f", media);

        } else {

            printf("Não foi dessa vez! Reprovado, nota: %.2f", media);

            printf("Informe o dia da semana para fazer a recuperação! \n");
            printf("Escolha de 1 a 5: \n");
            scanf("%d", &dia);

            switch (dia) {

                case 1:
                    printf("Segunda-feira");
                    break;
                case 2:
                    printf("Terça-feira");
                    break;
                case 3:
                    printf("Quarta-feira");
                    break;
                case 4:
                    printf("Quinta-feira");
                    break;
                case 5:
                    printf("Sexta-feira");
                    break;
                default:
                    printf("Informe somente números de 1 a 5!");

            }

        }

        cont++;
    }

    return 0;

}