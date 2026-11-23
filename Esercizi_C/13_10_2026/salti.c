#include <stdio.h>

int main()
{
    int pin, scelta;
    printf("Inserisci il pin: \n");
    scanf("%d", &pin);
    /*
    if (pin != 44122)
        goto fine;
    printf(" 1. Tizio 335 -1234567\n ");
    printf(" 2. Caio 347 -1234567\n ");
    printf(" Scegliere un contatto \n ");
    scanf("%d", &scelta);
    printf(" Chiamata del contatto %d in corso \n ", scelta);
fine:
    printf(" Fine \n ");*/
    if (pin != 44122)
    {
        printf(" 1. Tizio 335 -1234567\n ");
        printf(" 2. Caio 347 -1234567\n ");
        printf(" Scegliere un contatto \n ");
        scanf("%d", &scelta);
        printf(" Chiamata del contatto %d in corso \n ", scelta);
    }else{
        printf("Accesso negato, il programma sta per terminare!\n");
        
    }
    printf(" Fine \n ");
    return 0;
}