/* Recebe um número inteiro n > 0 e um vetor v de números inteiros com n elementos e devolve um elemento máximo de v */
#include <stdio.h>
#define MAX 100
int maximo(int n, int v[MAX])
{
    int aux;
    if (n == 1)
        return v[0];
    else
    {
        aux = maximo(n - 1, v);
        if (aux > v[n - 1])
            return aux;
        else
            return v[n - 1];
    }
}