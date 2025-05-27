/*Chiedi all'utente di inserire un numero e stampa se quel numero è pari o dispari*/
#include<stdio.h>

int main()
{
    int num;
    
    printf("\nInserire un numero per verificare se e' pari o dispari: ");
    scanf("%d", &num);

    if(num%2==0) printf("\nIl numero %d e' pari\n", num);
    if(num%2!=0) printf("\nIl numero %d e' dispari\n", num);

    return 0;

}