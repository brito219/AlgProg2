#include <stdio.h>

int main(void) {
  int n;
  float op1, op2;
  float resultado;
  char operador;

  scanf("%d", &n); 
  
for (int i = 0; i < n; i++) {
    scanf("%f %c %f", &op1, &operador, &op2); 

    if (operador == '+') {
        resultado = op1 + op2;
        printf("%.1f\n", resultado);

    } else if (operador == '-') {
        resultado = op1 - op2;
        printf("%.1f\n", resultado);

    } else if (operador == '*') {
        resultado = op1 * op2;
        printf("%.1f\n", resultado);

    } else if (operador == '/') {
        resultado = op1 / op2;
        printf("%.1f\n", resultado);
    }

    else
        printf("Erro: operador não reconhecido\n"); 
}
    // printf("%.1f\n", resultado);

  return 0;
}
