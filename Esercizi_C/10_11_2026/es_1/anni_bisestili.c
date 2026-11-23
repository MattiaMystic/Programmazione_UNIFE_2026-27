#include <stdio.h>
#define DIM 201

int bisestile(int a)
{
    return (a % 400 == 0) || (a % 4 == 0 && a % 100 != 0);
}

int main()
{

    int a[DIM], ls = 0, b[DIM];

    for (int i = 0; i < DIM; i++)
    {
        a[i] = 1900 + i;
    }
    for (int i = 0; i < DIM; i++)
    {
        if (bisestile(a[i]))
        {
            b[ls] = a[i];
            ls++;
        }
    }
    for (int i = 0; i < ls; i++)
    {
        printf("%d\n", b[i]);
    }
}