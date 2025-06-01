/*In questo esercizio verrà proposto all'utente di scegliere una bevanda tra 5 proposte, bisogna usare lo Switch*/
#include<stdio.h>

int main()
{
    int scelta;
    printf("\n1)Acqua naturale;\n2)Acqua frizzante;\n3)Caffé;\n4)Té;\n5)Cioccolata calda;\nScegliere il prodotto desiderato: ");
    scanf("%d", &scelta);

    switch(scelta){

        case 1:
            printf("\nErogazione Acqua naturale in corso . . .\n");
            break;
        
        case 2:
            printf("\nErogazione Acqua frizzante in corso . . .\n");
            break;

        case 3:
            printf("\nErogazione Caffé in corso . . .\n");
            break;

        case 4:
            printf("\nErogazione Té in corso . . .\n");
            break;

        case 5:
            printf("\nErogazione Cioccolata calda in corso . . .\n");
            break;
        
        default:
            printf("\nNessun prodotto disponibile per questo codice\n");
            break;
    }


    return 0;
}
