/*In questo esercizio ci sarà una funzione che sommerà dei valori passati in un ciclo do while*/
#include<stdio.h>

void sum(int input, int *p_somma)
{
    *p_somma+=input;
}

int main()
{
    int in, somma=0;

    do{
        printf("\nPer terminare digitare 0\nInserire valore: ");
        scanf("%d", &in);

        if(in>0)sum(in, &somma);
        if(in<0)printf("\nValore negativo!");
      
    }while(in!=0);

   printf("\nLa somma e': %d", somma);
    
    return 0;
}
