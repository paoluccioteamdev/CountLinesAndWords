#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "funzioni.h"

using namespace std;

int main()
{
    FILE* fp;
    int righe = 0;
    int i, j;
    int parole = 0;
    fp = fopen("testo.txt", "r");
    if (fp == NULL)
    {
        cout<<"Impossibile aprire il file\n\n\n\n";
        fclose(fp);
        system("PAUSE");
        return 0;
    }
    else
    {
        contaRighe(fp , i, righe);
        contaParole(fp , j, parole);
    }
    system("PAUSE");
    return 0;
}

