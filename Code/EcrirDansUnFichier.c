#include <stdio.h>
int main(void) {
int n,i; FILE *f;

f = fopen("EcrireDansUnFichier.txt","w");
if (f == NULL) {
printf("Eciture dans le fichier impossible!\n");
return -1;
}
printf("Saisir un nombre: ");
scanf("%d",&n);
for (i=1; i <= n; i++) {
fprintf(f,"%d\n",i);
} fclose(f); return 0;
}
