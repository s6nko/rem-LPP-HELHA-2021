#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fres, *fdat;
    int taille;
    float poids, poidsref;

    fdat = fopen("remC3.dat", "r");
    fres = fopen("remC3.res", "w");

    fscanf(fdat, "%d %f %f", &taille, &poids, &poidsref);
    float ecart = poidsref - poids;

    fprintf(fres, "Cette personne mesure %d cm et pèse %.1f kg\n%.1f ", taille, poids,ecart);
    
    
    
    if (poids > poidsref)
        fprintf(fres, "poids plus élevé que la référence");
    else
        fprintf(fres, "poids moins élevé que la réference");

    return 0;
}
