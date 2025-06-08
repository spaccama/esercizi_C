/*Questo programma chiama una funzione passando come argomenti un puntatore*/
#include<stdio.h>

void increment(int *px, int value)
{
    *px+=value;

}

int main(int argc, char **argv)
{
    int x, incremento;

    printf("\nInserire valore iniziale: ");
    scanf("%d", &x);

    printf("\nInserire valore da aggiungere: ");
    scanf("%d", &incremento);

    printf("\nValore non incrementato: %d", x);

    increment(&x, incremento);
    printf("\nValore incrementeato: %d", x);

    return 0;
}
