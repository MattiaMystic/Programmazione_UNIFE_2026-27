#include <stdio.h>
#define DIM 100

float media_aritmetica(int a[], int dl)
{
    float somma = 0;
    for (int i = 0; i < dl; i++)
    {
        somma += a[i];
    }
    return somma / dl;
}

int indice_max(int a[], int dl)
{
    int m = 0;
    for (int i = 1; i < dl; i++)
    {
        if (a[i] > a[m])
        {
            m = i;
        }
    }
    return m;
}

int indice_min(int a[], int dl)
{
    int m = 0;
    for (int i = 1; i < dl; i++)
    {
        if (a[i] < a[m])
        {
            m = i;
        }
    }
    return m;
}
int leggiInput(int a[])
{
    int n, dl = 0;
    do
    {

        scanf("%d", &n);
        if (n < 0)
            break;

        a[dl] = n;
        dl++;
    } while (n >= 0 && dl < DIM);

    return dl;
}

int numeri_frequenza(int a[], int dl, int numeri[], int frequenza[])
{
    int i, j, dln = 0;
    int trovato;
    for (i = 0; i < dl; i++)
    {
        trovato = 0;
        for (j = 0; j < dln; j++)
        {
            if (a[i] == numeri[j])
            {
                frequenza[j]++;
                trovato = 1;
                break;
            }
        }
        if (!trovato)
        {
            numeri[dln] = a[i];
            frequenza[dln] = 1;
            dln++;
        }
        else
        {
            frequenza[j]++;
        }
    }
    return dln;
}

int main()
{
    int a[DIM], dl, frequenza[DIM], numeri[DIM], dln = 0, frequenza_massima;
    dl = leggiInput(a);
    printf("Minimo : %d\n", a[indice_min(a, dl)]);
    printf("Massimo : %d\n", a[indice_max(a, dl)]);
    printf("Media : %.2f\n", media_aritmetica(a, dl));
    dln = numeri_frequenza(a, dl, numeri, frequenza);
    frequenza_massima = frequenza[indice_max(frequenza, dln)];
    printf("Frequenza massima : %d\n", frequenza_massima);
    for (int i = 0; i < dln; i++)
    {
        if (frequenza[i] == frequenza_massima)
        {
            printf("Numero con frequenza massima : %d\n", numeri[i]);
        }
    }
    return 0;
}