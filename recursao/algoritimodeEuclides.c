#include <stdio.h>

int euclides(int a, int b)
{

    if (b == 0)
    {
        return a;
    }
    else
    {
        int resto = a % b;
        return euclides(b, resto);
    }
}

int main()
{
    int a, b;
    printf("digite dois numeros para achar o mdc: \n");
    scanf("%d %d", &a, &b);
    printf("o mdc e: %d\n", euclides(a, b));
}