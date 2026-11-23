#include <stdio.h>
int main()
{
    int a, b;
    float media;
    a = 1;
    b = 2;
    // media = (float)(a + b) / 2; devo inserire il casting float senno uscirà il problema sotto commentato ma dobbiamo ancora vederlo quindi:
    media = (a + b) / 2.0;
    printf("La media è : %.2f\n", media); // stampa la media =1 perche a e b sono interi..

    return 0;
}