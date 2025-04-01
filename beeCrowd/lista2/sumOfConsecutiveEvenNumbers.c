#include <stdio.h>

int main() {
    int X;
    
    scanf("%d", &X);

    while (X != 0) {

        if (X % 2 != 0) {
            X++;
        }


        int soma = 0;
        for (int i = 0; i < 5; i++) {
            soma += X;
            X += 2;
        }

        printf("%d\n", soma);

        scanf("%d", &X);
    }

    return 0;
}
