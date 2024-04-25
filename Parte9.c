#include <stdio.h>

struct funcionario
{
    double salarioBruto, valorPorHora, inss, salarioFamilia;
    int horasTrabalhadas, dependentes;
};

int main()
{

    struct funcionario otavio;

    printf("horas trabalhadas: ");
    scanf("%d", &otavio.horasTrabalhadas);

    printf("valor por hora: ");
    scanf("%lf", &otavio.valorPorHora);

    printf("valor da contribuicao do inss: ");
    scanf("%lf", &otavio.inss);

    printf("numero de dependentes: ");
    scanf("%d", &otavio.dependentes);

    printf("valor do salario da familia: ");
    scanf("%lf", &otavio.salarioFamilia);

    double valorTotalPorHora = otavio.valorPorHora * otavio.horasTrabalhadas;

    otavio.salarioBruto = otavio.inss + valorTotalPorHora + otavio.salarioFamilia;

    printf("Salario bruto: %lf", otavio.salarioBruto);

    return 0;
}