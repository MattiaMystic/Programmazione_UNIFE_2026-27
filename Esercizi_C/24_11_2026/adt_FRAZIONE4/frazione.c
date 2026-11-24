#include <stdio.h>
#include <stdlib.h>
#include "frazione.h"


int mcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 1;
    }
    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }
    while (a != b)
    {
        if (a < b)
        {
            b -= a;
        }
        else
        {
            a -= b;
        }
    }
    return a;
}

// costruttore con getter
void frazione(Frazione *pf, int n, int d)
{
    if (d == 0)
    {
        printf("ERRORE\n");
        exit(1);
    }
    if (n == 0)
    {
        pf->numeratore = 0;
        pf->denominatore = 1;
        return;
    }
    int m = mcd(n, d);
    pf->numeratore = n / m;
    pf->denominatore = d / m;
    if (pf->denominatore < 0) // segno sempre al numeratore
    {
        pf->numeratore = -pf->numeratore;
        pf->denominatore = -pf->denominatore;
    }
}
int numeratore(Frazione *pf) // getter
{
    return pf->numeratore;
}

int denominatore(Frazione *pf) // getter
{
    return pf->denominatore;
}

void leggiFrazione(Frazione *pf)
{
    int n, d;
    printf("Inserisci il numeratore e il denominatore della frazione! \n");
    scanf("%d%d", &n, &d);

    frazione(pf, n, d);
}

void stampaFrazione(Frazione *pf1)
{

    printf("%d/%d \n", numeratore(pf1), denominatore(pf1));
}
float decimale(Frazione *pf)
{
    return (float)numeratore(pf) / denominatore(pf);
}

void risultato(Frazione *pf)
{
    printf("risultato: %.2f \n", decimale(pf));
}

void inverso(Frazione *pfr, Frazione *pf1)
{
    frazione(pfr, denominatore(pf1), numeratore(pf1));
}

void somma(Frazione *pfr, Frazione *pf1, Frazione *pf2)
{
    frazione(pfr, numeratore(pf1) * denominatore(pf2) + numeratore(pf2) * denominatore(pf1), denominatore(pf1) * denominatore(pf2));
}

void opposto(Frazione *pfr, Frazione *pf1)
{
    frazione(pfr, -numeratore(pf1), denominatore(pf1));
}

void prodotto(Frazione *pfr, Frazione *pf1, Frazione *pf2)
{
    frazione(pfr, numeratore(pf1) * numeratore(pf2), denominatore(pf1) * denominatore(pf2));
}

void quoziente(Frazione *pfr, Frazione *pf1, Frazione *pf2)
{
    Frazione fo;
    inverso(&fo, pf2);
    prodotto(pfr, pf1, &fo);
}
void differenza(Frazione *pfr, Frazione *pf1, Frazione *pf2)
{
    Frazione fo;
    opposto(&fo, pf2);
    somma(pfr, pf1, &fo);
}

