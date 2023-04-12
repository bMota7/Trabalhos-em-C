#include <stdio.h>
#include <locale.h>

int main() {

    float preco, total = 0;
    int quantidade, i;

    setlocale(LC_ALL, "Portuguese");

    for (i = 1; i <= 5; i++) {
        printf("Produto %d\n", i);
        printf("Digite o preço: ");
        scanf("%f", &preco);

        while(preco <= 0) { //validar o preço
            printf("Preço inválido! Digite novamente: ");
            scanf("%f", &preco);
        }

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        while(quantidade <= 0) { //validar a quantidade
            printf("Quantidade inválida! Digite novamente: ");
            scanf("%d", &quantidade);
        }

        total += preco * quantidade;
    }

    printf("\nValor total da compra: R$%.2f\n", total);

    return 0;
}

/* #include <stdio.h>

int main() {
    float preco, total = 0;
    int quantidade, i = 1;

    while (i <= 20) {
        printf("Produto %d\n", i);
        printf("Digite o preco: ");
        scanf("%f", &preco);

        while (preco <= 0) { // validar o preço
            printf("Preco invalido! Digite novamente: ");
            scanf("%f", &preco);
        }

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        while (quantidade <= 0) { // validar a quantidade
            printf("Quantidade invalida! Digite novamente: ");
            scanf("%d", &quantidade);
        }

        total += preco * quantidade;
        i++;
    }

    printf("\nValor total da compra: R$%.2f\n", total);

    return 0;
} */
