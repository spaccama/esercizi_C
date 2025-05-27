/*Dati tre numeri stampare il maggiore tra i tre*/

#include<stdio.h>

int main()
{
    int a, b, c;

    //Richiesta dei tre valori interi

    printf("\nInserire il primo numero intero: ");
    scanf("%d", &a);

    printf("\nInserire il secondo numero intero: ");
    scanf("%d", &b);

    printf("\nInserire il terzo numero intero: ");
    scanf("%d", &c);

    //Confronto dei valori

    if(a>=b && a>=c) printf("\nIL numero maggiore e': %d\n", a);
    if(b>=a && b>=c) printf("\nIL numero maggiore e': %d\n", b);
    if(c>=a && c>=b) printf("\nIL numero maggiore e': %d\n", c);

    //eccezione prevedibile

    if(a==b && b==c) printf("\nERROR!\n");
    
    return 0;