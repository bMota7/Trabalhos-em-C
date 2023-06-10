
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SENHA 20

int main(){
    int i, tamanho;
    char senha[MAX_SENHA + 1]; //+1 para o caractere nulo no final da string

    srand(time(NULL)); //Iinicializa a semente do gerador de números aleatórios com base no horário atual

    printf("Digite o tamanho da senha desejada: \n");
    scanf("%d", &tamanho);

    while (tamanho > MAX_SENHA)
    {
        printf("Tamanho máximo de caractere excedido. Informe novamente: \n");
        scanf("%d", &tamanho);
        //return 1;
    }

    for(i = 0; i < tamanho; i++){
        int tipo = rand() % 3; //Gera um número aleatório entre 0 e 2 para escolher o tipo de caractere

        switch(tipo){
            case 0: //Letra maiúscula
                senha[i] = 'A' + rand() % 26;
                break;
            case 1: //Letra minúscula
                senha[i] = 'a' + rand() % 26;
                break;
            case 2: //Número
                senha[i] = '0' + rand() % 10;
                break;
        }
    }
    
    senha[tamanho] = '\0'; //Adicona o caratere nulo ao final da string
    printf("Senha gerada: %s\n", senha);

    return 0;
}