#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreEntre = 0, nombreSecret = 0;
    const int MIN = 1, MAX = 100;
    srand(time(NULL)); // Initialisation de la donnée seed

    nombreSecret = (rand() % (MAX + 1 - MIN)) + MIN; // MIN <= nombreSecret <= MAX

    printf("*** Bienvenue dans Plus ou Moins ***\n\n"); // On affiche un titre

    do
    {
        printf("Entrez un nombre : ");
        scanf("%d", &nombreEntre);

        if (nombreEntre < nombreSecret)
            printf("C'est plus !\n\n");
        else if (nombreEntre > nombreSecret)
            printf("C'est moins !\n\n");
        else
            printf("Bravo, vous avez trouve le nombre secret !\n\n");
    } while (nombreEntre != nombreSecret);

    system("pause");

    return 0;
}
