typedef struct
{
    int numeratore;
    int denominatore;
} Frazione;

void frazione(Frazione *pf, int n, int d);

int numeratore(Frazione *pf);

int denominatore(Frazione *pf);

void leggiFrazione(Frazione *pf);

void stampaFrazione(Frazione *pf1);

float decimale(Frazione *pf);

void risultato(Frazione *pf);

void inverso(Frazione *pfr, Frazione *pf1);

void somma(Frazione *pfr, Frazione *pf1, Frazione *pf2);

void opposto(Frazione *pfr, Frazione *pf1);

void prodotto(Frazione *pfr, Frazione *pf1, Frazione *pf2);

void quoziente(Frazione *pfr, Frazione *pf1, Frazione *pf2);

void differenza(Frazione *pfr, Frazione *pf1, Frazione *pf2);
