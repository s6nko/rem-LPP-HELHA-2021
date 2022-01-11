/*Exercice remC12
* 
Soit un immeuble composé de 30 appartements.
Le facteur doit déposer 75 enveloppes dans les boîtes aux lettres de cet immeuble. Le fichier de
données reprend la liste des numéros inscrits sur les enveloppes (15 numéros par record)
On demande en sortie un tableau reprenant pour chacune des boîtes : son numéro et le nombre
d’enveloppes reçues. Une boîte aux lettres par record.*/




#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    FILE *fdat,  *fres;

    fdat = fopen("remC12.dat","r");
    fres = fopen("remC12.res","w");

    // Déclaration des variable

    int nombre, nblettre[31] = {0};

    // récupération des données
    for (int i = 1; i <= 75; i++)
    {
        fscanf(fdat, "%2d ",&nombre);
        nblettre[nombre] += 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        fprintf(fres, "%02d    %2d\n", i, nblettre[i]);
    }

    return 0;
}
