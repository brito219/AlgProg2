#include <stdio.h>
#include <math.h>
int main()
{

    double A, B, C;
    double R1, R2;
    double d;
    scanf("%lf %lf %lf", &A, &B, &C);

    d = (B * B) - (4 * A * C);

    if (A == 0 || d < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-B + sqrt(d)) / (2 * A);
        R2 = (-B - sqrt(d)) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}