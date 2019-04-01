#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p,x,y,n=0;
    printf("Entrer le nombre d'etoiles souhaitees \n\n");
    scanf("%d", &n);

   for (y= 0; y < n; y++)
    {
        for (x= 0; x <= y; x++)
            printf("*");
        printf("\n");
    }
}
