#include <stdio.h>

int main()
{
    int X;
    int soma = 0;
    scanf("d", &X);

    while (X != 0)
    {
        if (X % 2 != 0)
        {
            X = X + 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        soma = +X;
        X = +2;
    }

    printf("%d", soma);

    return 0;
}
