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

	printf("1.Salle standard: 9.50 \n2.Salle 3D: 12.50 \n3.Salle IMAX: 16.00\n");
       	if (scanf("%d", &choixFilms) != 1 || choixFilms < 1 || choixFilms > 3) {
		printf("Choix invalide \n");
		return 1;
	}	
	
	float prixFinal = prix[choixFilms - 1] * ((age <= 18) ? 0.80 : (age >= 65) ? 0.85 : 1.00);
	printf("Le prix de votre billet est de: %.2f \n", prixFinal);

	return 0;
}
