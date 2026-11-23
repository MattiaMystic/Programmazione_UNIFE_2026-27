#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 2, b = 3;

    swap(&a, &b);

    printf("%d %d \n", a, b);
    return 0;
}