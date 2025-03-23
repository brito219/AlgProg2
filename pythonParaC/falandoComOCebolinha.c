/*Se encontrar um 'R', verificar se o próximo caractere também é 'R'. Se sim, substituir os 
dois 'R's por um 'L'. Caso contrário, substituir um único 'R' por 'L'.*/
#include <stdio.h>

#define MAX_PALAVRA 20

void copiar_cebolinha(char palavra[], char palavra_modificada[]) {
    int i = 0;
    int j = 0;
    int ultima_eh_erre = 0;

    while (palavra[i] != '\0') 
    {
        if (palavra[i] == 'R') 
        {
            if (ultima_eh_erre == 0) 
            {
                palavra_modificada[j] = 'L';  
                j++;
                ultima_eh_erre = 1;  
            }
        } 
        else 
        {
            palavra_modificada[j] = palavra[i];  
            j++;
            ultima_eh_erre = 0;  
        }
        i++;
    }
    palavra_modificada[j] = '\0';  
}
int main() {
  char palavra[MAX_PALAVRA];
  char palavra_modificada[MAX_PALAVRA];

  scanf("%s", palavra);
  copiar_cebolinha(palavra, palavra_modificada);
  printf("%s", palavra_modificada);

  return 0;
}

/*
strlen(s): Retorna o comprimento de uma string (não conta o '\0').
strcmp(s1, s2): Compara duas strings lexicograficamente.
strcpy(dest, src): Copia a string src para dest.
strcat(dest, src): Concatena a string src ao final de dest.
*/