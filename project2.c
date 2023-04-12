// Jogo de adivinhação com C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numero_aleatorio, tentativa, numero_de_tentativa = 0;
    srand(time(NULL)); //inicializador o gerador de números aleatórios
    numero_aleatorio = rand() % 100 + 1; //gera um número aleatório entre 1 e 100

    printf("Bem-vindo ao jogo de adivinhação! \n");
    printf("Tente adivinhar oo número que estou pensadno entre 1 e 100. \n");

    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);
        numero_de_tentativa++;

        if(tentativa > numero_aleatorio) {
            printf("Tente um número menor. \n");
        } else if(tentativa < numero_aleatorio) {
            printf("Tente um número maior. \n");
        }
    } while (tentativa != numero_aleatorio);

    printf("Parabéns! Você acertou o número em %d tentativas. \n", numero_de_tentativa);
    
    return 0;
}