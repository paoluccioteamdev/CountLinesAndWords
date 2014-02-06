#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void contaRighe(FILE*fp, int i , int righe)
{
    while((i=fgetc(fp))!= EOF)
    {
        if (i == '\n')
        {
            righe++;
        }
    }
    righe += 1;
    cout<<"\nNumero di righe: "<<righe<<"\n\n";
}
