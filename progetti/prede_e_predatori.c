#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

#define ROW 20
#define COL 20

char griglia[ROW][COL], cop_griglia[ROW][COL];
int tempo=0, r=0, v=0;


void genera()
{
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            griglia[i][j]='.';

        }
    }   
}

void posiziona()
{
    int x, y;
    do {
        x = rand() % COL;
        y = rand() % ROW;
    } while (griglia[y][x] != '.');
    griglia[y][x] = 'R';

    do {
        x = rand() % COL;
        y = rand() % ROW;
    } while (griglia[y][x] != '.');
    griglia[y][x] = 'V';
}


void stampa(char var_stamp[ROW][COL], int *tempo, int *r, int *v)
{
    printf("\nTempo trascorso: %ds\n", *tempo);
    printf("\nRossi: %d\tVerdi: %d\n", *r, *v);

    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            if(var_stamp[i][j]=='.') printf("⚫");
            else if(var_stamp[i][j]=='R') printf("🔴");
            else if(var_stamp[i][j]=='V') printf("🟢");

        }
        printf("\n");
    }
    printf("\n");
}

void copia(char var_ini[ROW][COL], char var_fina[ROW][COL])
{
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            var_fina[i][j]=var_ini[i][j];

        }
    }
}

void attacco(int x, int y){ if(rand()%100>=50)cop_griglia[x][y]='.'; }

void riproduzione(int *tempo, int i, int j, char type)
{
    if(*tempo%10==0 && *tempo>1)
    {
        if(griglia[i][j+1]=='.' || griglia[i][j-1]=='.' || griglia[i+1][j+1]=='.' || griglia[i+1][j-1]=='.' || griglia[i-1][j+1]=='.' || griglia[i-1][j-1]=='.')
            cop_griglia[i][j]=type;
    }
}

void movimento(int *tempo_a)
{
    int dir=0;      //direzione
    
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            if(griglia[i][j]=='R')
            {
                dir=rand()%8;       //scelta casuale per 8 direzioni

                if(dir==0 && j+1 < COL)     //destra
                {
                    if(griglia[i][j+1]=='V')        //controllo dei nemici
                    {
                        attacco(i, j+1);

                    }else if(griglia[i][j+1]=='.'){     //controllo che sia libera la cella
                        cop_griglia[i][j+1]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');        //ogni 10 secondi riproduci
                    }

                }

                else if(dir==1 && j-1 >= 0)     //sinistra
                {
                    if(griglia[i][j-1]=='V')
                    {
                        attacco(i, j-1);

                    }else if(griglia[i][j-1]=='.'){
                        cop_griglia[i][j-1]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');
                    }       
                }

                else if(dir==2 && i+1 < ROW)        //sotto
                {
                    if(griglia[i+1][j]=='V')
                    {
                        attacco(i+1, j);

                    }else if(griglia[i+1][j]=='.'){
                        cop_griglia[i+1][j]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');
                    }
                }

                else if(dir==3 && i-1>=0 )
                {
                    if(griglia[i-1][j]=='V')        //sopra
                    {
                        attacco(i-1, j);
                    }else if(griglia[i-1][j]=='.'){
                        cop_griglia[i-1][j]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');
                    }
                }

                else if(dir==4 && i+1<ROW && j+1<COL)       //sotto a destra
                {
                    if(griglia[i+1][j+1]=='V')
                    {
                        attacco(i+1, j+1);

                    }else if(griglia[i+1][j+1]=='.'){
                        cop_griglia[i+1][j+1]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');
                    }
                }

                if(dir==5 && i-1>=0 && j+1<COL)     //sopra a destra
                {
                    if(griglia[i-1][j+1]=='V')
                    {
                        attacco(i-1, j+1);

                    }else if(griglia[i-1][j+1]=='.'){

                        cop_griglia[i-1][j+1]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');

                    }
                }
                
                if(dir==6 && i+1<ROW && j-1>=0)         //sotto a sinistra
                {
                    if(griglia[i+1][j-1]=='V')
                    {
                        attacco(i+1, j-1);
                    
                    }else if(griglia[i+1][j-1]=='.'){

                        cop_griglia[i+1][j-1]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');

                    }
                }

                if(dir==7 && i-1>=0 && j-1>=0)      //sopra a sinistra
                {
                    if(griglia[i-1][j-1]=='V')      
                    {
                        attacco(i-1, j-1);

                    }else if(griglia[i-1][j-1]=='.'){
                        cop_griglia[i-1][j-1]='R';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'R');
                    }
                }
            }

            else if(griglia[i][j]=='V')
            {
                dir=rand()%8;

                if(dir==0 && j+1 < COL)
                {
                    if(griglia[i][j+1]=='R')
                    {
                        attacco(i, j+1);

                    }else if(griglia[i][j+1]=='.'){
                        cop_griglia[i][j+1]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    }
                }

                else if(dir==1 && j-1 >= 0)
                {
                    if(griglia[i][j-1]=='R')
                    {
                        attacco(i, j-1);

                    }else if(griglia[i][j-1]=='.'){

                        cop_griglia[i][j-1]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    }              
                }

                else if(dir==2 && i+1 < ROW)
                {
                    if(griglia[i+1][j]=='R')
                    {
                        attacco(i+1, j);
                    }else if(griglia[i+1][j]=='.'){

                        cop_griglia[i+1][j]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    }
                }

                else if(dir==3 && i-1>=0)
                {
                    if(griglia[i-1][j]=='R')
                    {
                        attacco(i-1, j);

                    }else if(griglia[i-1][j]=='.'){

                        cop_griglia[i-1][j]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    }
                }

                else if(dir==4 && i+1<ROW && j+1<COL )
                {
                    if(griglia[i+1][j+1]=='R')
                    {
                        attacco(i+1, j+1);

                    }else if(griglia[i+1][j+1]=='.'){

                        cop_griglia[i+1][j+1]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    }
                }

                else if(dir==5 && i-1>=0 && j+1<COL)
                {
                    if(griglia[i-1][j+1]=='R')
                    {
                        attacco(i-1, j+1);

                    }else if(griglia[i-1][j+1]=='.'){

                        cop_griglia[i-1][j+1]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    }
                }
                
                else if(dir==6 && i+1<ROW && j-1>=0 ) 
                {
                    if(griglia[i+1][j-1]=='R')
                    {
                        attacco(i+1, j-1);
                    }else if(griglia[i+1][j-1]=='.'){

                        cop_griglia[i+1][j-1]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    } 
                }

                else if(dir==7 && i-1>=0 && j-1>=0 )
                {
                    if(griglia[i-1][j-1]=='R')
                    {
                        attacco(i-1, j-1);
                    }else if(griglia[i-1][j-1]=='.'){
                        
                        cop_griglia[i-1][j-1]='V';
                        cop_griglia[i][j]='.';

                        riproduzione(&tempo, i, j, 'V');
                    }
                   
                }
            }
        }
    }

    *tempo_a+=1;
}

void controllo(int *r, int *v)
{
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            if(griglia[i][j]=='R')*r+=1;
            else if(griglia[i][j]=='V')*v+=1;

        }
    }

}

int main()
{
    srand(time(NULL));

    genera();
    posiziona(&r, &v);
    stampa(griglia, &tempo, &r, &v);

    while(1)
    {
        copia(griglia, cop_griglia);
        movimento(&tempo);
        copia(cop_griglia, griglia);

        r=0, v=0;
        controllo(&r, &v);
        stampa(griglia, &tempo, &r, &v);

        if(r==0)
        {
            printf("\nI rossi si sono estinti");
            break;
        }

        if(v==0)
        {
            printf("\nI verdi si sono estinti");
            break;
        }

        sleep(1);
    }

    return 0;
}
