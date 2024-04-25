#include <stdio.h>

int main()
{

    int base, altura;
    double area;

    printf("valor da base do triangulo: ");
    scanf("%d", &base);

    printf("valor da altura do triangulo: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("area do triangulo: %lf", area);

    return 0;
}