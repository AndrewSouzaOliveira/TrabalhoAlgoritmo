#include <stdio.h>

int main()
{

    char nome[2][10];
    int idade[2];

    for (int i = 0; i < 2; i++)

    {
        printf("nome %d: ", i + 1);
        scanf("%s", nome[i]);

        printf("idade %d: ", i + 1);
        scanf("%d", &idade[i]);
    }

    printf("%s\n", nome[0]);
    printf("%d\n", idade[0]);

    printf("%s\n", nome[1]);
    printf("%d\n", idade[1]);

    int dif = idade[0] - idade[1];

    printf("diferenca da idade: %d", dif);

    return 0;
}