#include <stdio.h>

int main()
{

    int A, N, soma = 0;

    scanf("%d", &A);
    while (N <= 0)
    {
        scanf("%d", &N);
    }

    for (int i = 0; i < N; i++)
    {
        soma += (A + i);
    }

    printf("%d\n", soma);

    return 0;
}