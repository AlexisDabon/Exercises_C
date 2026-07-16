#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main (void){
	int16_t nombre1;
	int16_t nombre2;
	int8_t choixOperations;

	printf ("Entrez le premier nombre :\n");
	if (scanf("%hd", &nombre1) != 1) {
		return EXIT_FAILURE;
	}

	printf ("Entrez le second nombre :\n");
	if (scanf("%hd", &nombre2) != 1) {
		return EXIT_FAILURE;
	}
	
	printf("\n MENU \n 1.addition \n 2.soustraction \n 3.multiplication \n votre choix (1-3)");
       	if (scanf("%hhd", &choixOperations) != 1) {
		return EXIT_FAILURE;
	}
	
	if (choixOperations == 1) {
		printf("Résultat : %d\n", nombre1 + nombre2);
	}
	else if (choixOperations == 2) {
		printf("Résultat : %d\n", nombre1 - nombre2);
	}
	else if (choixOperations == 3) {
		printf("Résultat : %d\n", nombre1 * nombre2);
	} else {
       		fprintf(stderr, "Choix invalide \n");
     		return EXIT_FAILURE;	
	}

	return EXIT_SUCCESS;
}
