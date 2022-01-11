#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    FILE *fdat, *fres;
    fdat = fopen("remC9.dat", "r");
    fres = fopen("remC9.res", "w");
    
    int nArticle;
    float prixArticle;
    int quantVendue;
    
    int artMoinsCher;
    float prixMoinsCher;

    for (int i = 0; i < 10; i++) 
    {
        fscanf(fdat, "%3d", &nArticle);
        fscanf(fdat, "%5f", &prixArticle);
        fscanf(fdat, "%d[^\n]", &quantVendue);

        printf("%d %.2f %d\n", nArticle, prixArticle, quantVendue);

    }
    
    


    return 0;
}
