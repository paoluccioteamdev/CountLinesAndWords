#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void contaParole(FILE*fp, int j , int parole)
{
    fp = fopen("testo.txt", "r");

    while((j=fgetc(fp))!= EOF)
    {
        if (j == ' ' || j == '\n')
        {
            parole++;
        }
    }

    parole += 1;
    fclose(fp);
    cout<<"Numero di parole: "<< parole <<"\n\n\n\n\n\n\n\n";

}
