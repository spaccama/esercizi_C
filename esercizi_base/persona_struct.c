/*Studio del tipo di struttura*/

#include<stdio.h>
#include<string.h>

struct Persona
    {
        int età;
        int altezza;
        char nome[30];

    };

int main()
{
    struct Persona p1;

    p1.età=14;
    p1.altezza=160;
    strcpy(p1.nome, "Roberto Rossi");

    printf("\nNome: %s\nEta': %d\nAltezza: %d\n", p1.nome, p1.età, p1.altezza);

    return 0;
}
