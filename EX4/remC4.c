#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fres, *fdat;
    int taille, size = 0;
    float poids, moyPoids = 0, moyTaille = 0, totPoids = 0, totTaille = 0;


    fres = fopen("remC4.res", "w");
    fdat = fopen("remC4.dat", "r");

    fscanf(fdat, "%d %f", &taille, &poids);

    fprintf(fres, "TAILLE\tPOIDS\n");
    fprintf(fres, "===================\n");
    
    while (taille != 999)
    {
        totTaille += taille;
        totPoids += poids;
        size++;
        fprintf(fres, "%d\t%.1f\n", taille, poids);
        fscanf(fdat, "%d %f", &taille, &poids);
        
    }

    moyPoids = totPoids/size;
    moyTaille = totTaille/size;

    fprintf(fres, "====================\n");
    fprintf(fres, "%.1f\t%.1f (moyennes)", moyTaille, moyPoids);

    return 0;
}
