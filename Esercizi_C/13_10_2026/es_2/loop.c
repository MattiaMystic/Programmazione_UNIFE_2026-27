#include <stdio.h>

int main()
{
    int a = 0;

stampa:
    printf("%d\n", a);
    a++;
    if (a <= 99)
        goto stampa;
}