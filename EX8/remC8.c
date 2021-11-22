#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    FILE *fdat, *fres;
    fdat = fopen("remC8.dat", "r");
    fres = fopen("remC8.res", "w");
    
    float jSemaine[7];
    float amende;
    float totAmendes = 0;
    float moyAmendes = 0;
    float comp = 0;
    float JourPGrosseAmende = 0;
    int nJourPGrosseAmende;

    for (int i = 0; i < 7; i++)
    {
        fscanf(fdat, "%f", &amende);
        jSemaine[i] = amende;
        totAmendes += amende;
        if (JourPGrosseAmende < amende)
        {
            JourPGrosseAmende = amende;
            nJourPGrosseAmende = i;

        }
    }
    moyAmendes = totAmendes / 7;

    printf("Lundi : %.1f\n", jSemaine[0]);
    printf("Mardi : %.1f\n", jSemaine[1]);
    printf("Mercredi : %.1f\n", jSemaine[2]);
    printf("Jeudi : %.1f\n", jSemaine[3]);
    printf("Vendredi : %.1f\n", jSemaine[4]);
    printf("Samedi : %.1f\n", jSemaine[5]);
    printf("Dimanche : %.1f\n", jSemaine[6]);
    printf("\n");
    printf("Moyenne des amendes : %.1f\n", moyAmendes);
    printf("Plus grosse amende : %.1f, le %d\n", JourPGrosseAmende, nJourPGrosseAmende);


    


    return 0;
}
