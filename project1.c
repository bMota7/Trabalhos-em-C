//Projeto sistema de escola

#include <stdio.h>
#include <locale.h>
 
int main() {
    int num1, num2, media, diaRecuperacao;
    float notaTrabalho = 7;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe dois numeros inteiros: \n");
    scanf("%d%d", &num1, &num2);
    if (num1 >= 0 && num2 >= 0){
        media = (num1 + num2 + notaTrabalho)/3;
        printf("A nota do aluno é: %d\n", media);

        if (media >= 7){
           printf("Aprovado!");
        }else {
            
            printf("Reprovado! \n");

            printf("A seguir escolha  de 1 a 5 para selecionar o dia da recuperação:");
            scanf("%d", &diaRecuperacao);
            switch (diaRecuperacao) {
            case 1:
                printf("Dia selecionado, segunda feira!");
                break;
            case 2:
                printf("Dia selecionado, terça feira!");
                break;
            case 3:
                printf("Dia selecionado, quarta feira!");
                break;
            case 4:
                printf("Dia selecionado, quinta feira!");
                break;
            case 5:
                printf("Dia selecionado, sexta feira!");
                break;
    
            default:
            break;
            }
        }
    }else {
        printf("Informe valores válido!");
    }

    return 0;
}