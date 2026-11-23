#include <stdio.h>
int divisione(int n, int divisione, int *resto, int *risultato)
{
    if (divisione != 0)
    {
        *risultato = (n / divisione);
        *resto = n % divisione;
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a, div, resto = 0, risultato = 0;
    printf("Inserisci a : \n");
    scanf("%d", &a);
    printf("Per quanto vuoi dividerlo ? \n");
    scanf("%d", &div);

    switch (divisione(a, div, &resto, &risultato))
    {
    case 0:

        printf("Il risultato è %d e il resto è %d", risultato, resto);
        break;
    case 1:
        printf("Errore divisione per 0\n");
        break;
    }

    return 0;
}