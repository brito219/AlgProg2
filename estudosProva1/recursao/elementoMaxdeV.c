#include <stdio.h>
#include <math.h>
#define MAX 30

int elementoMax(int n, int v[])
{
    if (n == 1)
    {
        return v[0];
    }
    else
    {
        int aux = elementoMax(n - 1, v);
        if (aux > v[n - 1])
        {
            return aux;
        }
        else
        {
            return v[n - 1];
        }
    }
}

int main()
{

    int n;
    int v[MAX];

    printf("digite o tamanho do vetor:");
    scanf("%d", &n);

    printf("digite os elementos do vetor:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("%d", elementoMax(n, v));

    return 0;
}