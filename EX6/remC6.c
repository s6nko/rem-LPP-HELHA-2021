#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fres, *fdat;

    int jour,mois,annee,sexe,matricule,annNaissance;
    int nHomme = 0, nFemme = 0, ageMoy = 0, nEnfants = 0, nAdultes = 0, nTotal = 0, ageTot = 0;
    float pourcHommes = 0, pourcFemmes= 0;

    fdat = fopen("remC6.dat", "r");
    fres = fopen("remC6.res", "w");

    fscanf(fdat, "%d/%d/%d", &jour, &mois, &annee);               // 10/20/2000
    fscanf(fdat, "%d%*c%d%*c%d", &matricule, &sexe, &annNaissance);

    for (int i = 0; i < 6; i++) 
    {
        if (sexe == 1) 
        {
            nHomme++;
            if ((annee - annNaissance) > 18) 
            {
                nAdultes++;
                fprintf(fres, "En date du %d/%d/%d, Monsieur %d, né en %d, a %d ans et est un adulte\n", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
            }
            else 
            {
                nEnfants++;
                fprintf(fres, "En date du %d/%d/%d, Monsieur %d, né en %d, a %d ans et est un enfant\n", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
            }
        } 
        else 
        {
            nFemme++;
            if ((annee - annNaissance) > 18) 
            {
                nAdultes++;
                fprintf(fres, "En date du %d/%d/%d, Madame %d, né en %d, a %d ans et est un adulte\n", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
            }
            else 
            {
                nEnfants++;
                fprintf(fres, "En date du %d/%d/%d, Madame %d, né en %d, a %d ans et est un enfant\n", jour, mois, annee, matricule, annNaissance, (annee - annNaissance));
            }
        }
        ageTot += (annee - annNaissance);
        nTotal++;
        fscanf(fdat, "%d%*c%d%*c%d", &matricule, &sexe, &annNaissance);

    }

    pourcHommes = (nHomme / nTotal) *100;
    pourcFemmes = (nFemme / nTotal) *100;
    ageMoy = ageTot / nTotal;

    fprintf(fres, "Pourcentage d'hommes: %f\n", pourcHommes);
    fprintf(fres, "Moyenne d'âge: %d\n", ageMoy);

    if (nEnfants>nAdultes)
        fprintf(fres, "Il y a plus d'enfants\n");
    else if (nAdultes>nEnfants)
        fprintf(fres, "Il y a plus d'adultes\n");
    else
        fprintf(fres, "Il y a autant d'enfants que d'adultes\n");
     
        

    return 0;
}
