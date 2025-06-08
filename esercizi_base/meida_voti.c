/*Questo programma calcola la media dei voti partendo da un array i cui elementi vengono inseriti da terminale*/
#include<stdio.h>

int main()
{
    int n, voto;
    float media;

    printf("\nQuantita' voti da inserire: ");
    scanf("%d", &n);

    int voti[n];

    for(int i=0;i<n;++i)
    {
        printf("\nInserire voto numero %d: ", i+1);
        scanf("%d", &voto);
        
        voti[i]=voto;
    }

    for(int i=0;i<n;++i)
    {
        media+=voti[i];
    }

    printf("\nMedia dei voti: %.2f", media/n);
  
    return 0;
}
