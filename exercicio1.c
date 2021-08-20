/*Multiplique 2 numeros interiros e mostre o resultado */

#include<stdio.h>

int main() {

    int valor1, valor2, mult;

    printf("Digite um número: ");
    scanf("%d", &valor1);

    printf("Digite outro número: ");
    scanf("%d", &valor2);

    mult = valor1 * valor2;

    printf("A multiplicação desses dois valores eh: %d", mult);

    return 0;

}