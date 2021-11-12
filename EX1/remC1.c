#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fres, *fdat;
    int nb1, nb2, nb3;
    float nb4, nb5, nb6;

    fres = fopen("remC1.res", "w");
    fdat = fopen("remC1.dat", "r");

    fscanf(fdat, "%d %d %d", &nb1, &nb2, &nb3);
    fprintf(fres, "%d\n", nb3);  
    fprintf(fres, "%d\n", nb2);
    fprintf(fres, "%d\n", nb1);

    fprintf(fres, "\n");

    fscanf(fdat, "%f %f %f", &nb4, &nb5, &nb6);
    fprintf(fres, "%.1f\n", nb4);
    fprintf(fres, "%.2f\n", nb5);
    fprintf(fres, "%.3f\n", nb6);
    





    return 0;
}