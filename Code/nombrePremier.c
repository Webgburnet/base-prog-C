/* nbPremier.c  Demande d'entrer un entier N. Il affiche si c'est un nombre premier
sinon il affiche un diviseur de N.  */

#include <stdio.h>

int main(void) {
  int n;
  int i;
  int premier;

  printf("Entrer votre nombre N > ");
  scanf("%d", &n);
  premier = 1; /*  on suppose que le nombre est premier */
  for (i=2; (i<(n/2)) && premier; ) { /* pour continuer la boucle i<(n/2)) et premier = 1 */

    if ((n % i) == 0) /* Teste si la division de n par i n'a pas de reste */
      premier = 0; /*  oui donc n est divisible par i */
    else
      i++;
  }
   if (premier)
    printf("%d est un nb premier\n", n);
  else
    printf("%d a %d comme diviseur\n", n, i);


  return 0;
}
