/*Calcular o valor do produto após o desconto de 25%*/

#include<stdio.h>

int main() {
    float valor, semdesc,  desc;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    semdesc = (valor * 0.25);
    desc = valor - semdesc;

    printf("O valor do produto com desconto sera: %f", desc);
    return 0;
}