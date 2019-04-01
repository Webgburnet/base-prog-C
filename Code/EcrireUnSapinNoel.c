int main(int argc, char *argv[])
   {
    int x,y,n=6;
    for (y= 0; y < n; y++)
    {
        for (x= 0; x < n-y; x++)
            printf(" ");
        for (x= 0; x < 2*y-1; x++)
            printf("*");
        printf("\n");
    }
    {
    n=2;
    for (y= 0; y < n; y++)
    {
        printf("    ***");
        printf("\n");
    }
    }
   }
