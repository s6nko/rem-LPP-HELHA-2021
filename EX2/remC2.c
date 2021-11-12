#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fres, *fdat;
    float cheque1, cheque2;
    int J1, J2, pointsJ1, pointsJ2;

    fres = fopen("remC2.res", "w");
    fdat = fopen ("remC2.dat", "r");

    fscanf(fdat, "%f %f", &cheque1, &cheque2);
    fscanf(fdat, "%d %d", &J1, &pointsJ1);
    fscanf(fdat, "%d %d", &J2, &pointsJ2);

    if (pointsJ1 > pointsJ2) 
    {
        fprintf(fres, "Vainqueur: %d -> %f EUR\n", J1, cheque1);
        fprintf(fres, "Perdant: %d -> %f EUR\n", J2, cheque2);

    }
    else 
    {
        fprintf(fres, "Vainqueur: %d -> %f EUR\n", J2, cheque1);
        fprintf(fres, "Perdant: %d -> %f EUR\n", J1, cheque2);

    }





    
    return 0;
}
