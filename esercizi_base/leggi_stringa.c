/*Questo esercizio mostra come chiedere all'utente il proprio nome*/

#include<stdio.h>

int main()
{
    char saluto[]="Ciao";
    char nome[20];

    printf("Inserire nome: ");
    fgets(nome, 20, stdin);

    puts(saluto);

    printf("%s", nome);

    return 0;
}
