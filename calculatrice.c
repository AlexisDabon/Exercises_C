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

	return 0;
}
