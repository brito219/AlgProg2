#include <stdio.h>
#define MAX 100

int remove_R(int n, int v[MAX], int k)
{
    if (k == n - 1)
    {
        return n - 1;
    }
    else
    {
        v[k] = v[k + 1];
        return remove_R(n, v, k + 1);
    };
}

int main()
{
    int n, k;
    int vetor[MAX];
    printf("tamanho do vetor: \n");
    scanf("%d", &n);

    printf("valores do vetor de tamanho n: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("indice do que quer remover: \n");
    scanf("%d", &k);

    n = remove_R(n, vetor, k);

    printf("vetor novo: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
}
