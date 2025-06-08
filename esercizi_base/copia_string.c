/*Questo esercizio copia le stringhe*/

#include<stdio.h>
#include<string.h>

int main()
{
    char nome[10];
    char cop_nome[10];

    printf("\nInserire il nome da copiare: ");
    fgets(nome, 10, stdin);

    strcpy(cop_nome,nome);
    if(strcmp(nome,cop_nome)==0)printf("\nI due nomi sono stati copiati con successo!\n");

    return 0;
}
