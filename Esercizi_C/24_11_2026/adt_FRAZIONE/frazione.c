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
Frazione frazione(int n, int d)
{
    Frazione f;
    if (d == 0)
    {
        printf("ERRORE\n");
        exit(1);
    }
    if (n == 0)
    {
        f.numeratore = 0;
        f.denominatore = 1;
        return f;
    }
    int m = mcd(n, d);
    f.numeratore = n / m;
    f.denominatore = d / m;
    return f;
}

Frazione leggiFrazione()
{

    int n, d;
    printf("Inserisci il numeratore e il denominatore della frazione! \n");
    scanf("%d%d", &n, &d);

    return frazione(n, d);
}

void stampaFrazione(Frazione f)
{

    printf("%d/%d \n", numeratore(f), denominatore(f));
}
float decimale(Frazione f)
{
    return (float)numeratore(f) / denominatore(f);
}
void risultato(Frazione f)
{
    printf("risultato: %.2f \n", decimale(f));
}

int numeratore(Frazione f)
{
    return f.numeratore;
}

int denominatore(Frazione f)
{
    return f.denominatore;
}

Frazione inverso(Frazione f)
{
    return frazione(denominatore(f), numeratore(f));
}

Frazione somma(Frazione f1, Frazione f2)
{
    return frazione(numeratore(f1) * denominatore(f2) + numeratore(f2) * denominatore(f1), denominatore(f1) * denominatore(f2));
}

Frazione opposto(Frazione f)
{
    return frazione(-numeratore(f), denominatore(f));
}

Frazione prodotto(Frazione f1, Frazione f2)
{
    return frazione(numeratore(f1) * numeratore(f2), denominatore(f1) * denominatore(f2));
}

Frazione quoziente(Frazione f1, Frazione f2)
{
    return prodotto(f1, inverso(f2));
}
Frazione differenza(Frazione f1, Frazione f2)
{
    return (somma((f1), opposto(f2)));
}

