#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    FILE* fdat = fopen("remC10.dat", "r");
    FILE* fres = fopen("remC10.res", "w");

    int lMatricule[20];
    int lCode[20];

    int liste[20];

    for (int i = 0; i < 20; i++) 
    {
        fscanf(fdat, "%d%d", &lMatricule[i], &lCode[i]);
    }


    fprintf(fres, "=======CERTIFICAT MEDICAL===========\n");
    for (int y = 0; y < 20; y++)
    {
        if(lCode[y] == 1)
            fprintf(fres, "%d\n", lMatricule[y]);
    }
    fprintf(fres, "=======DOCUMENT OFFICIEL===========\n");

    for (int y = 0; y < 20; y++)
    {
        if(lCode[y] == 2)
            fprintf(fres, "%d ", lMatricule[y]);
    }
    fprintf(fres, "\n======INJUSTIFIÉ============\n");

    for (int y = 0; y < 15; y++)
    {
        if(lCode[y] == 3)
            fprintf(fres, "%d %d %d\n", lMatricule[y], lMatricule[y+1], lMatricule[y+2]);
    }



    return 0;
}
