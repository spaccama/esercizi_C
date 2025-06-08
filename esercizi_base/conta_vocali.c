/*Questo esercizio conta le covali presenti in una frase*/

#include<stdio.h>
#include<string.h>

int main()
{

    char string[20];
    int vocali=0;
    
    printf("\nInserire la stringa: ");
    fgets(string, 20, stdin);

    for(int i=0;i<strlen(string);++i)
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U') ++vocali;

        printf("\nVocali presenti: %d", vocali);

    return 0;
}
