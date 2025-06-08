/*In questo esercizio cercheremo di scambiare i puantatori tramite funzione*/

#include<stdio.h>

void converti(int *pa, int *pb)
{
    int support=*pa;        //la variabile support ci serve per fare da tramite
    *pa=*pb;
    *pb=support;


}

int main(int argc, char **argv)
{

    int a, b;

    a=10;
    b=20;

    printf("\nValore di a prima della conversione: %d\nValore di b prima della conversione: %d", a, b);
    converti(&a, &b);
    printf("\nValore di a dopo la conversione: %d\nValore di b dopo la conversione: %d", a, b);


    return 0;
}
