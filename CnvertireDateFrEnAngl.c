#include <stdio.h>

int main(void)
{
  int jour, mois, annee;

  printf("Enter a date (jj/mm/aaaa): ");
  scanf("%d/%d/%d", &jour, &mois, &annee);
  printf("La date en anglais est: %d.%d.%d\n", mois, jour, annee);

  return 0;
}
