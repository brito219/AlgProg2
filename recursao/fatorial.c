/* Recebe um número inteiro n >= 0 e devolve o fatorial de n */
int fat(int n)
{
    int result;
    if (n <= 1)
        result = 1;
    else
        result = n * fat(n - 1);
    return result;
}