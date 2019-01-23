/* Exemple de if else imbrique et arguments multiples dans une fonction scanf.  */

#include <stdio.h>

	main()
	{
		int    operation_impossible = 0;
		char   operateur;
		float  nombre1, nombre2, resultat;

		printf("Saisir deux nombres et une operation dans le format suivant:\n");
		printf(" nombre1 operateur nombre2\n");
		scanf("%f %c %f", &nombre1, &operateur, &nombre2);

		if(operateur == '*')
			resultat = nombre1 * nombre2;
		else if(operateur == '/')
			resultat = nombre1 / nombre2;
		else if(operateur == '+')
			resultat = nombre1 + nombre2;
		else if(operateur == '-')
			resultat = nombre1 - nombre2;
		else
			operation_impossible = 1;

		if( operation_impossible != 1 )
			printf("%f %c %f = %f\n", nombre1, operateur, nombre2, resultat );
		else
			printf("Operation impossible.\n");
	return 0;
	}
