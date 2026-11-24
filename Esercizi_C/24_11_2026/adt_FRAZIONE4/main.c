#include <stdio.h>
#include "frazione.h"


int main()
{
    
    Frazione f, f2, r;

    // costruttore e semplificazione
    frazione(&f, 2, 4);
    printf("2/4 semplificata: ");
    stampaFrazione(&f); // atteso 1/2

    frazione(&f2, 4, 5);
    printf("f2: ");
    stampaFrazione(&f2); // atteso 4/5

    // casi particolari del costruttore
    frazione(&r, 0, 5);
    printf("0/5: ");
    stampaFrazione(&r); // atteso 0/1

    frazione(&r, 3, -6);
    printf("3/-6: ");
    stampaFrazione(&r); // atteso -1/2

    frazione(&r, -3, -6);
    printf("-3/-6: ");
    stampaFrazione(&r); // atteso 1/2

    // valore decimale
    printf("f in decimale -> ");
    risultato(&f); // atteso 0.50

    // operazioni
    somma(&r, &f, &f2);
    printf("f + f2 = ");
    stampaFrazione(&r); // atteso 13/10

    differenza(&r, &f, &f2);
    printf("f - f2 = ");
    stampaFrazione(&r); // atteso -3/10

    prodotto(&r, &f, &f2);
    printf("f * f2 = ");
    stampaFrazione(&r); // atteso 2/5

    quoziente(&r, &f, &f2);
    printf("f / f2 = ");
    stampaFrazione(&r); // atteso 5/8

    opposto(&r, &f2);
    printf("opposto di f2 = ");
    stampaFrazione(&r); // atteso -4/5

    inverso(&r, &f2);
    printf("inverso di f2 = ");
    stampaFrazione(&r); // atteso 5/4

    // test con input da tastiera
    Frazione u;
    leggiFrazione(&u);
    printf("Hai inserito: ");
    stampaFrazione(&u);
    risultato(&u);

    // decommenta per provare l'errore (denominatore 0):
    // frazione(&r, 1, 0);          // stampa ERRORE ed esce
    // Frazione zero;
    // frazione(&zero, 0, 1);
    // inverso(&r, &zero);          // anche questo dà ERRORE

    return 0;
}
