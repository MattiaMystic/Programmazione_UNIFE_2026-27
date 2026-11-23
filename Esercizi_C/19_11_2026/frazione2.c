#include <stdio.h>

typedef struct
{
    int numeratore;
    int denominatore;
} Frazione;

Frazione frazione(int n, int d);
int numeratore(Frazione f);
int denominatore(Frazione f);

Frazione leggiFrazione()
{

    int n, d;
    printf("Inserisci il numeratore e il denominatore della frazione! \n");
    scanf("%d%d", &n, &d);

    return frazione(n, d);
}
int mcd(int a, int b)
{
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

void stampaFrazione(Frazione f)
{
    int m = mcd(numeratore(f), denominatore(f));
    printf("%d/%d \n", numeratore(f) / m, denominatore(f) / m);
}
float decimale(Frazione f)
{
    return (float)numeratore(f) / denominatore(f);
}
void risultato(Frazione f)
{
    printf("risultato: %.2f \n", decimale(f));
}

// costruttore con getter
Frazione frazione(int n, int d)
{
    Frazione f;
    f.numeratore = n;
    f.denominatore = d;
    return f;
}

int numeratore(Frazione f)
{
    return f.numeratore;
}

int denominatore(Frazione f)
{
    return f.denominatore;
}

int main()
{
    Frazione f;
    f = leggiFrazione();
    stampaFrazione(f);
    risultato(f);

    return 0;
}