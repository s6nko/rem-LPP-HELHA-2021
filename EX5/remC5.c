#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fres, *fdat;

    int jour,mois,annee,sexe,matricule,annNaissance;

    fdat = fopen("remC5.dat", "r");
    fres = fopen("remC5.res", "w");

    fscanf(fdat, "%d/%d/%d", &jour, &mois, &annee);               // 10/20/2000
    fscanf(fdat, "%d%*c%d%*c%d", &matricule, &sexe, &annNaissance);

    if (sexe == 1)
        if ((annee - annNaissance) > 18)
            fprintf(fres, "En date du %d/%d/%d, Monsieur %d, né en %d, a %d ans et est un adulte", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
        else
            fprintf(fres, "En date du %d/%d/%d, Monsieur %d, né en %d, a %d ans et est un enfant", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
    else
        if ((annee - annNaissance) > 18)
            fprintf(fres, "En date du %d/%d/%d, Madame %d, né en %d, a %d ans et est un adulte", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
        else
            fprintf(fres, "En date du %d/%d/%d, Madame %d, né en %d, a %d ans et est un enfant", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
        

    return 0;
}
