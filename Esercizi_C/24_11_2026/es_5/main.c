#include <stdio.h>
#include "aritmetica.h"

int main()
{
    //gcc -c main.c
    //gcc -c aritmetica.c
    //gcc main.o aritmetica.o
    //./a.out
    int a = 5, b = 7, c, d;
    c = somma(a, b);
    d = prodotto(a, b);

    printf("%d %d\n", c, d);
}