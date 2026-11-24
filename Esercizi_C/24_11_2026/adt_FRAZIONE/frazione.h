
typedef struct
{
    int numeratore;
    int denominatore;
} Frazione;

Frazione frazione(int n, int d);


Frazione leggiFrazione();

void stampaFrazione(Frazione f);

float decimale(Frazione f);

void risultato(Frazione f);


int numeratore(Frazione f);


int denominatore(Frazione f);

Frazione inverso(Frazione f);

Frazione somma(Frazione f1, Frazione f2);

Frazione opposto(Frazione f);

Frazione quoziente(Frazione f1, Frazione f2);

Frazione differenza(Frazione f1, Frazione f2);

