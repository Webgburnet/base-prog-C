#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float hauteur = 8, longueur = 12, largeur = 10;
  float volume;

  volume = hauteur * longueur * largeur/1000;

  printf("Dimensions: %lfx%lfx%lf\n", longueur, largeur, hauteur);
  printf("Volume (en metre cube): %lf\n", volume);
  printf("Prix du fret (En Fcp): %lf\n", (volume * 1200) );

  return 0;
}
