/*Desafio*/
/*Leia o comprimento da pista, os numero total de voltas a serem percorridas, o numero de abastecimentos e o consumo de combustivel do carro*/
/*O programa deve calcular o numero minimo de litros necessarios para percorrer até o primeiro abastecimento*/

#include<stdio.h>

    int main() {
        float pista, pistaNova, consumo, minlitros, Parada1;
        int voltas, abastecimento;

        printf("Digite o comprimento da pista, em metros: \n");
        scanf("%f", &pista);

        printf("Digite o numero total de voltas a serem percorridas: \n");
        scanf("%d", &voltas);

        printf("Digite o numero de abastecimentos que deseja fazer: \n");
        scanf("%d", &abastecimento);

        printf("Digite o consumo de combustivel do carro, em km/L: \n");
        scanf("%f", &consumo);

        /*1 Metro [m] = 0,001 Quilómetro [km]*/ 
        Parada1 = voltas/abastecimento;
        pistaNova = pista/1000;
        minlitros = Parada1 * pistaNova;

        printf("O numero minimo de litros para percorrer ate o primeiro abastecimento sera: %4.2f \n", minlitros);
        return 0;
    }