#include <stdio.h>

int main()
{
    char nome[100];
    double salariofixo, vendastotais, salariototal;

    scanf("%s", nome);
    scanf("%lf", &salariofixo);
    scanf("%lf", &vendastotais);

    salariototal = salariofixo + (vendastotais * 0.15);

    printf("TOTAL = R$ %.2lf\n", salariototal);
    return 0;
}