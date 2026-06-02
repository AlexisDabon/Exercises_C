#include <stdio.h>

int main () {
	int age;
	int choixFilms;

	float prixBase = 0.0;
	float prixFinal;

	printf ("Quel âge avez vous?\n");
	scanf ("%d", &age);
	
	if (age <= 0) {
		printf ("accès refusé , âge non valide \n");
		return 1;
	}
	else {
		printf ("accès autorisé \n");
	}
	
	printf ("salle standard : 9.50 \n");
	printf ("salle 3D : 12.50 \n");
	printf ("salle IMAX : 16.00 \n");
	printf ("votre choix 1-3 \n");
	scanf ("%d", &choixFilms);

	switch (choixFilms) {
		case 1 :
			prixBase = 9.50;
			break;
		case 2 : 
			prixBase = 12.50;
			break;
		case 3 : 
			prixBase = 16.00;
			break;
		default : 
			printf ("choix invalide \n");
			return 1;
	}

	return 0;
}
