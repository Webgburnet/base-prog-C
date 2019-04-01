#include <stdio.h>

int main(void)

{

	int i=0, j=0, NUM=3;

	for(i=-NUM; i<=NUM; i++)

	{

	for(j=-NUM; j<=NUM; j++)

	{

	if( abs(i)+abs(j)==NUM) // ou if( abs(i)+abs(j)<=NUM)

	 { printf( "*"); }

	else { printf( " ");}

	}

	printf( "\n");

	}
	return 0;
	}
