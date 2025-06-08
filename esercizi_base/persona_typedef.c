/*come esercizio persona struct ma rendiamo il tutto più sugar syntax*/
#include <stdio.h>
#include<string.h>

typedef struct 
{
    int anni;
    char genere[3];
    char nome[20];
    char cognome[20];
    
}Persona;

int main()
{
    Persona p1;

    p1.anni=29;
    strcpy(p1.genere, "F");
    strcpy(p1.nome, "Lucia");
    strcpy(p1.cognome, "Rossa");

    printf("Nome: %s\nCognome: %s\nAnni: %d\nGenere: %s\n", p1.nome, p1.cognome, p1.anni, p1.genere);

}
