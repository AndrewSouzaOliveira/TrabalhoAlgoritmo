#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;
    double x1, x2, delta;

    printf("valor de a: ");
    scanf("%d", &a);

    printf("valor de b: ");
    scanf("%d", &b);

    printf("valor de c: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4 * a * c;

    x1 = ((b * -1) - sqrt(delta)) / 2 * a;
    x2 = ((b * -1) + sqrt(delta)) / 2 * a;

    printf("raizes da funcao %lf, %lf", x1, x2);

    return 0;
}