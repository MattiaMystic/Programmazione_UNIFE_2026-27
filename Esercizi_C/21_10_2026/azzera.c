#include <stdio.h>
void azzera(int *a)
{
    *a = 0;
}

int main()
{
    int a = 5;
    printf("a ora vale %d \n", a);
    azzera(&a);
    printf("a ora vale %d \n", a);
    return 0;
}