#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maiorAB = (a + b + abs(a - b)) / 2;
    int maiorFinal = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maiorFinal);

    return 0;
}
