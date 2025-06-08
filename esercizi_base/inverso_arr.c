/*In questo esercizio invertiremo un array già fornito nel codice*/
#include<stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int arr_r[5];

    printf("\nArray non invertito: ");

    for(int i=0; i<5;++i)       //visito l'array per visualizzare a schermo gli elementi mentre costruisco il suo inverso
    {
        printf("\nElemento %d: %d", i, arr[i]);
        arr_r[4-i]=arr[i];
    }
        
    printf("\n\nArray invertito: ");

    for(int i=0; i<5;++i)       //visitiamo l'array invertito
        printf("\nElemento %d: %d", i,arr_r[i]);
        
    return 0;
}
