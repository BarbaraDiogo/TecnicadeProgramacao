#include<stdio.h> //declaração de bibliotecas

    int main() {  // principal função
        int var = 0, var2;

        printf("Digite um valor: "); //função que imprime na tela
        scanf("%d", &var); //lê e armazena o valor digitado

        if(var>0){
            var2 = 5;
            printf("%d", var2);
        }else{
            printf("bla");
        }
        printf("%d", var2);
    }