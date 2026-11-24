#include <stdio.h>
#include <stdlib.h>


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