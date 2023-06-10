
#include <stdio.h>

int main(){
    int i;
    float preco, soma = 0, ValorFinal;

    printf("Informe o preço dos produtos: \n");

    for(i = 1; i < 5; i++){

        scanf("%f", &preco);

        while (preco < 0)
        {
            printf("Preço inválido, digite novamente: \n");
            scanf("%f", &preco);
        }

        soma += preco;
    }

    ValorFinal = soma;

    printf("Valor final: %.3f", ValorFinal);

    return 0;
}