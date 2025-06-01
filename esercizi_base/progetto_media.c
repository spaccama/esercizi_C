/*Questo progetto si propone di trovare la media di 5 voti inseriti da terminale*/

#include<stdio.h>

int main()
{
    float voto1, voto2, voto3, voto4, voto5, media;

    printf("\nInserire il primo voto: ");
    scanf("%f", &voto1);

    printf("\nInserire il secondo voto: ");
    scanf("%f", &voto2);

    printf("\nInserire il terzo voto: ");
    scanf("%f", &voto3);

    printf("\nInserire il quarto voto: ");
    scanf("%f", &voto4);

    printf("\nInserire il quinto voto: ");
    scanf("%f", &voto5);

    media = (voto1 + voto2 + voto3 + voto4 + voto5)/5;

    printf("\nLa media e': %.2f\n", media);
    


    return 0;
}
