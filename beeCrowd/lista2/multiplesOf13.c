#include <stdio.h>

int main()
{

    int X = 0, Y = 0, soma = 0;
    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y)
    {
        int aux = X;
        X = Y;
        Y = aux;
    }

    for (int i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
        {
            soma = i + soma;
        }
    }

    printf("%d\n", soma);

    return 0;
}