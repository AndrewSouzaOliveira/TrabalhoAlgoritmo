#include <stdio.h>

int main()
{
    char nome[10];
    int idade;
    char sexo[10];
    double peso;
    double altura;
    char profissao[10];
    char rua[15];
    char bairro[15];
    char cidade[15];
    char estado[15];
    int cep;
    int telefone;

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu sexo: \n");
    scanf("%s", sexo);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua profissao: \n");
    scanf("%s", profissao);

    printf("Digite sua rua: \n");
    scanf("%s", rua);

    printf("Digite seu bairro: \n");
    scanf("%s", bairro);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade);

    printf("Digite seu estado: \n");
    scanf("%s", estado);

    printf("Digite seu cep: \n");
    scanf("%d", &cep);

    printf("Digite seu telefone: \n");
    scanf("%d", &telefone);

    printf("Nome: %s", nome);

    return 0;
}