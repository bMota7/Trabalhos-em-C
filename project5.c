#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float metros, decimetros, centimetros, milimetros;

    printf("Informe um valor em metros: \n");
    scanf("%f", &metros);
    
    while (metros <= 0)
    {
        printf("Informe um valor válido!");
        scanf("%f", &metros);
    } 

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("%.2f metros correspondem a: \n", metros);
    printf("%.2f em decimetros: \n", decimetros);
    printf("%.2f em centimetros: \n", centimetros);
    printf("%.2f em milimetros: \n", milimetros);

    return 0;

}