#include <stdio.h>
#include "frazione.h"

int main()
{
    Frazione f, f2, f3, f4, f5;
    f = leggiFrazione();
    stampaFrazione(f);
    risultato(f);
    f2 = leggiFrazione();
    stampaFrazione(f2);
    risultato(f2);

    f3 = somma(f, f2);

    stampaFrazione(f3);
    f4 = opposto(f3);

    stampaFrazione(f4);
    f5 = inverso(f3);
    stampaFrazione(f5);

    stampaFrazione(quoziente(frazione(1, 3), frazione(1, 3))); // se c'è 0 ..dato è prodotto il denominatore 0 da errore!!

    stampaFrazione(differenza(frazione(2, 3), frazione(1, 3)));
    return 0;
}