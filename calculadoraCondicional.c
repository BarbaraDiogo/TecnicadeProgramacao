#include<stdio.h>

int main() {
    float n1, n2, resultado;
    int opcao;

    printf("-----------------------------\n");
    printf(" Bem vindo a Calculadora\n");
    printf("-----------------------------\n");  

    printf("============================ \n");
    printf("(1) Para soma: \n");  
    printf("(2) Para subtracao: \n");
    printf("(3) Para multiplicacao: \n");
    printf("(4) Para divisao: \n");
    printf("============================ \n");

    scanf("%d", &opcao);

    printf("============================ \n");
    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);
    printf("============================ \n");

    if(opcao == 1) {
        resultado = n1 + n2;
        printf("O valor da soma dos valores %3.2f + %3.2f sera: %3.2f \n", n1, n2, resultado);
    
    }else if(opcao == 2) {
        resultado = n1 - n2;
        printf("O valor da subtracao dos valores %3.2f - %3.2f sera: %3.2f \n", n1, n2, resultado);
    
    }else if(opcao == 3) {
        resultado = n1 * n2;
        printf("O valor da multiplicacao dos valores %3.2f * %3.2f sera: %3.2f \n", n1, n2, resultado);
    
    }else if(opcao == 4) {
        resultado = n1 / n2;
        printf("O valor da divisao dos valores %3.2f / %3.2f sera: %3.2f \n", n1, n2, resultado);
    }
}