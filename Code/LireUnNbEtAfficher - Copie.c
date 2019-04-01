#include <stdio.h>
int main(void) {
int x;
printf("Taper un nombre: ");
scanf("%d",&x);
printf("Ce nombre est: %d%d%d\n",x%10,(x/10)%10,x/100);
getchar();
return 0;
}
