#include <stdio.h> 

int main () { 
	int nombre1;
	int nombre2;
	int choixOperations;

	printf ("Entrez le premier nombre :\n");
	scanf ("%d", &nombre1);

	printf ("Entrez le second nombre :\n");
	scanf ("%d", &nombre2);

	printf ("Choisissez l'operation :\n");
    	printf ("1. Addition (+)\n");
    	printf ("2. Soustraction (-)\n");
    	printf ("3. Multiplication (*)\n");
    	printf ("4. Division (/)\n");
    	printf ("Votre choix (1-4) : ");
    	scanf ("%d", &choixOperations);

	if (choixOperations == 1) {
		printf ("%d", nombre1 + nombre2);
	}
	else if (choixOperations == 2) {
		printf ("%d", nombre1 - nombre2);
	}
	else if (choixOperations == 3) { 
		printf ("%d", nombre1 * nombre2);
	}
	else if (choixOperations == 4) { 
		printf ("%d", nombre1 / nombre2);
	}
	else {
		printf("erreur de saisie \n");
	}	

	return 0;
}
