#include <stdio.h>

int main()
{

    float a, b, c, d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    d = ((a * 2) + (b * 3) + (c * 5)) / 10;
    printf("MEDIA = %.1f\n", d);

    return 0;
}