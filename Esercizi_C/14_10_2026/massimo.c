#include <stdio.h>
int massimoDiQuattro(int n, int n1, int n3, int n4)
{

    return massimo(massimoDiTre(n, n1, n3), n4);
}
int massimoDiTre(int n, int n1, int n3)
{
    // return massimo(n, n1) >= n3 ? massimo(n,n1) : n3;
    return massimo(massimo(n, n1), n3);
}
int massimo(int n, int n1)
{
    return n >= n1 ? n : n1;
}
int main()
{
    int n, n1, n3,n4, max = 0;
    printf("Inserisci due numeri \n");
    scanf("%d%d", &n, &n1);
    max = massimo(n, n1);
    printf("Il massimo dei 2 è: %d \n", max);
    printf("Inserisci un terzo numero! \n");
    scanf("%d", &n3);
    printf("Il max dei tre numeri è %d\n", massimoDiTre(n, n1, n3));
    printf("Inserisci un quarto numero! \n");
    scanf("%d", &n4);
    printf("Il max dei tre numeri è %d\n", massimoDiQuattro(n, n1, n3, n4));

    return 0;
}