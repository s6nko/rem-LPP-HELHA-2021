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


    printf("=======CERTIFICAT MEDICAL===========\n");
    for (int y = 0; y < 20; y++)
    {
        if(lCode[y] == 1)
            printf("%d\n", lMatricule[y]);
    }
    printf("=======DOCUMENT OFFICIEL===========\n");

    for (int y = 0; y < 20; y++)
    {
        if(lCode[y] == 2)
            printf("%d\n", lMatricule[y]);
    }
    printf("======INJUSTIFIÉ============\n");

    for (int y = 0; y < 20; y++)
    {
        if(lCode[y] == 3)
            printf("%d\n", lMatricule[y]);
    }



    return 0;
}
