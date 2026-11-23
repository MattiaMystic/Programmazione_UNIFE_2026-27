#include <stdio.h>

void valoreAssoluto(int *n)
{

    if (*n < 0)
    {

        *n=-*n;
    }
    
}
int main()
{
    int n;
    printf("Inserisci un numero per calcolare il suo valore assoluto !\n");
    scanf("%d", &n);
    valoreAssoluto(&n);
    printf("Il valore assoluto è: %d\n", n);
    return 0;
}