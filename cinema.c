#include <stdio.h>

int main () {
	int age;
	int choixFilms;
	float prix[] = {9.50, 12.50, 16.00};

	printf ("Quel âge avez vous ? \n");
	if (scanf("%d", &age) != 1 || age <= 0) {
		printf ("Accès refusé , âge non valide \n");
		return 1;
	}
	printf("Accès autorisé \n");

	printf("Salle standard: 9.50 \n, Salle 3D: 12.50 \n, Salle IMAX: 16.00 \n");
       	if (scanf("%d", &choixFilms) != 1 || choixFilms < 1 || choixFilms > 3) {
		printf("Choix invalide \n");
		return 1;
	}	
	

	return 0;
}
