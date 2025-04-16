#include <stdio.h>

int main()
{
    int N[200];
    int i, AUX;

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < 10; i++)
    {
        int j = 19 - i;
        AUX = N[i];
        N[i] = N[j];
        N[j] = AUX;
    }

    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}