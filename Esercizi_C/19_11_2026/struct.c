#include <stdio.h>

typedef struct
{
    char nome[20];
    char cognome[20];
    int eta;
} Persona;

Persona leggiPersona()
{
    Persona p;
    printf("Inserisci il nome , cognome ed eta! \n");
    scanf("%s%s%d", p.nome, p.cognome, &p.eta);
    return p;
}
void stampaPersona(Persona *p) {
    printf("nome: %s, cognome: %s, eta: %d", p->nome, p->cognome, p->eta);
}


int main()
{
    Persona p;
    p = leggiPersona();
    stampaPersona(&p);


    return 0;
}