/*QUesto esercizio calcola la media di elementi positivi presenti in un array*/
#include<stdio.h>

int main()
{
    int i, n, pos;

    //inserimento, questo passaggio potrebbe essere saltato inserendo nel codice un array fisso arr[5]={1,2,3,4,5};

    printf("\nInserire grandezza array: ");
    scanf("%d", &n);

    float arr[n], media;

    for(i=0;i<n;++i)
    {
        printf("\nInserire elemento numero %d: ", i+1);
        scanf("%f", &arr[i]);
    }

 
    for(i=0;i<n;++i)            //visitiamo l'array, se troviamo elementi positivi incrementiamo la variabile pos(positivi) e aggiungiamo tale valore a media
    {
        if(arr[i]>=0)
        {
            pos++;
            media+=arr[i];          //per risparmiare spazio media inizialmente viene usata come somma degli elementi
        } 
    }

    if(pos==0)
    {
        printf("\nERROR! Nessun valore positivo");
        return 1;
    }

    printf("\nLa media e': %.2f", media/pos);           //facciamo all'interno del print il calcolo per la media

    return 0;
}
