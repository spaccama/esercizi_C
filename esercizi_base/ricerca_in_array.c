/*Questo esercizio chiede all'utente un elemento e verifica se questo è disponibile all'interno dell'array (già dichiarato nel codice)*/

#include<stdio.h>

int main()
{

    int arr[5]={4,2,8,5,8};
    int num, i, pos;
    
    printf("\nElemento da cercare: ");
    scanf("%d", &num);

    for(i=0;i<5;++i)
    {
        if(arr[i]==num)         //ricerca che si ferma al primo elemento trovato per risparmio di tempo
        {
            pos=arr[i];
            printf("\nElemento presente alla posizione %d: '%d'", i+1, pos);
            break;
        }
    }

    if(pos==0)printf("\nNessun elemento trovato per: '%d'", num);
        
    return 0;
}
