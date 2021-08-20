/*Calcular a media de 4 notas*/

#include<stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    printf("Digite sua quarta nota: ");
    scanf("%f", &n4);

    media = ((n1 + n2 + n3 +n4) / 4);

    printf("A media das notas eh: %f", media);

    return 0;
}