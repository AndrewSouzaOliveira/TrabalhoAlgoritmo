#include <stdio.h>
#include <math.h>

struct produtos
{

    char descricao[15], nome[15];
    int quantidade;
    double preco;
};

int main()
{

    struct produtos produto;

    printf("nome do produto: ");
    scanf("%s", produto.nome);

    printf("Descricao do produto: ");
    scanf("%s", produto.descricao);

    printf("Quantidade de produtos no estoque: ");
    scanf("%d", &produto.quantidade);

    printf("Preco do produto: ");
    scanf("%lf", &produto.preco);

    printf("Total em estoque: %d", produto.quantidade);

    return 0;
}