#include<stdio.h> //declaração de bibliotecas

    int main () {  // principal função
        int var = 0;

        printf("Digite um valor: "); //função que imprime na tela
        scanf("%d", &var); //lê e armazena o valor digitado

        if(var>0){
            printf("Valor positivo\n\n");
        }else{
            if(var<0){
                printf("valor negativo\n\n");
            }
        }

    }