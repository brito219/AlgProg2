#include <stdio.h>

int main()
{
    int N, qnt, total = 0;
    int C = 0, R = 0, S = 0;
    char especie;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &qnt, &especie);
        total += qnt;

        if (especie == 'C')
        {
            C += qnt;
        }
        else if (especie == 'R')
        {
            R += qnt;
        }
        else if (especie == 'S')
        {
            S += qnt;
        }
    }

    double porc_C = (C * 100.0) / total;
    double porc_R = (R * 100.0) / total;
    double porc_S = (S * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf %%\n", porc_C);
    printf("Percentual de ratos: %.2lf %%\n", porc_R);
    printf("Percentual de sapos: %.2lf %%\n", porc_S);

    return 0;
}
