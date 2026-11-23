#include <stdio.h>

int main()
{
    int n = 0, d = 0;

ripeti:
    printf("Inserisci il numero \n");
    scanf("%d", &n);
    if (n >= 0)
    {

        d = n * 2;
        printf("Il doppio è %d \n", d);
         goto ripeti;
    }

   

    printf("Fine , numero negativo!\n");
}