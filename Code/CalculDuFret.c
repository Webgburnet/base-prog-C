#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int coutDuFret = 0;
  double hauteur = 0, longueur = 0, largeur = 0, volume = 0; // Declaration et initialisation des variables

  printf("Quel est la longueur? ");
  scanf("%lf", &longueur); // On demande la longueur

  printf("Quel est la largeur? ");
  scanf("%lf", &largeur); // On demande la largeur

  printf("Quel est la hauteur? ");
  scanf("%lf", &hauteur); // On demande la hauteur

  printf("Quel est le cout du fret? ");
  scanf("%d", &coutDuFret); // On demande le cout du fret

  volume = hauteur * longueur * largeur/1000000;

  printf("Dimensions: %.2fx%.2fx%.2f\n", longueur, largeur, hauteur);
  printf("Volume (en metre cube): %f\n", volume);
  printf("Prix du fret (En Fcp): %.2f\n", (volume * coutDuFret) );

  return 0;
}
