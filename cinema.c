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

	return 0;
}
