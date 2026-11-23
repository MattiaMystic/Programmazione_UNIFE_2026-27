#include <stdio.h>

int main()
{
    char c;
    printf("Inserisci una cifra o un numero e io indovinerò cosa hai inserito!\n");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("La lettera %c è maiuscola\n", c);
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("La lettera %c è minuscola!\n", c);
    }
    else if (c >= '0' && c <= '9')
    {
        printf("%c è una cifra!\n", c);
    }
    else
    {
        printf("La lettera inserita è un carattere speciale : %c\n", c);
    }
    return 0;
}