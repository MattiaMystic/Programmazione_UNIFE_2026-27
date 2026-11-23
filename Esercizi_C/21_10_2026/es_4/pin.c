#include <stdio.h>

int main()
{
    int pin;
    do
    {
        printf("Inserisci il pin \n");
        scanf("%d", &pin);

        if (pin == 44122)
        {
            printf("Pin corretto \n");
        }
        else
        {
            printf("Pin errato, riprova\n");
        }
    } while (pin != 44122);
}