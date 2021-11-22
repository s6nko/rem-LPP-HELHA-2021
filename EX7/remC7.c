#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fres, *fdat;

    fres = fopen("remC7.res", "w");
    fdat = fopen("remC7.dat", "r");

    int nCandidat, nVoix, nVoixAct;
    int mCandidat = 0, comp = 0;

    fscanf(fdat, "%d%d%d", &nCandidat, &nVoix, &nVoixAct);

    while(nCandidat != -1)
    {
        printf("Candidat numéro %d - %d\n", nCandidat, (nVoixAct - nVoix));

        if (comp < (nVoixAct - nVoix)) 
        {   
            comp = (nVoixAct - nVoix);                     
            mCandidat = nCandidat;
        }

        fscanf(fdat, "%d%d%d", &nCandidat, &nVoix, &nVoixAct);
    }
    printf("Candidat le plus surpris: %d\n", mCandidat);

    return 0;
}
