#include <stdio.h>
int giorniM(int mese, int a)
{
    if (meseNormale(mese))
    {
        return 30;
    }
    else if (mese == 2)
    {
        if (bisestile(a))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 31;
    }
}

int bisestile(int a)
{
    return (a % 400 == 0 || (a % 4 == 0 || a % 100 == 0));
}

int meseNormale(int mese)
{
    return (mese == 4 || mese == 6 || mese == 9 || mese == 11);
}
int valida(int g, int m, int a)
{
    if (m < 1 && m > 12)
    {
        return 0;
    }
    if (g < 1 || g > giorniM(m, a))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{

    int giorno, mese, anno;
    int giorni_del_mese;
    printf("Inserisci il giorno,mese ed anno:\n");
    scanf("%d%d%d", &giorno, &mese, &anno);

    if (!valida(giorno, mese, anno))
    {
        printf("Hai inserito una data non valida!!\n");
        return -1;
    }
    giorni_del_mese = giorniM(mese, anno);
    if (giorno == 31 && mese == 12)
    {
        printf("Il giorno successivo è: %d/%d/%d", 1, 1, anno + 1);
    }
    else if (giorno == giorni_del_mese)
    {
        printf("Il giorno successivo è: %d/%d/%d", 1, mese + 1, anno);
    }
    else
    {
        printf("Il giorno successivo è: %d/%d/%d", giorno + 1, mese, anno);
    }
    return 0;
}