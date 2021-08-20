#include<stdio.h>

int main() {
    float base, altura, area, perimetro;

    printf("Digite o valor da base da sala retangular: \n");
    scanf("%f", &base);

     printf("Digite o valor da altura da sala retangular: \n");
    scanf("%f", &altura);

    perimetro = (2*(base+altura));
    area = base*altura;

    printf("O valor da area dessa sala eh: %3.2f \n", area);
    printf("O valor do perimetro dessa sala eh: %3.2f", perimetro);

}