#include<stdio.h>
#include<math.h>

#define PI 3.1415

int main() {

    float raio, comp, area;

    printf ("Digite o valor para o raio:\n");
    scanf("%f", &raio);

    comp = 2 * PI * raio;
    area = PI * raio * raio;

    printf("O comprimento eh: %f\n", comp);
    printf("A area eh: %f\n", area);

    return 0;

}