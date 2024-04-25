#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, dif, quadrado;

    printf("primeiro valor: ");
    scanf("%d", &a);

    printf("segundo valor: ");
    scanf("%d", &b);

    dif = a - b;
    quadrado = pow(dif, 2);

    printf("diferenca do quadrado de dois numero: %d", quadrado);

    return 0;
}