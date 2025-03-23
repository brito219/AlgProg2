#include <stdio.h>

int main()
{

    int cod1, un1, cod2, un2;
    float preco1, preco2;

    scanf("%d %d %f", &cod1, &un1, &preco1);
    scanf("%d %d %f", &cod2, &un2, &preco2);

    float total = (un1 * preco1) + (un2 * preco2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}