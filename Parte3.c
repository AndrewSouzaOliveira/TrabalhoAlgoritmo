#include <stdio.h>

int main()
{

    char nome[4][10];
    int idade[4], totalidade, media;

    totalidade = 0;
    for (int i = 0; i < 4; i++)

    {
        printf("nome %d: ", i + 1);
        scanf("%s", nome[i]);

        printf("idade %d: ", i + 1);
        scanf("%d", &idade[i]);
        totalidade += idade[i];
    }

    media = totalidade / 4;

    printf("media das idades: %d \n", media);

    return 0;
}