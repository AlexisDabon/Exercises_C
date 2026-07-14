#include <stdio.h> 

int main(void) {
	unsigned int ageUtilisateur = 0;

	printf(" Quel âge avez vous ? ");

	if (scanf("%u", &ageUtilisateur) != 1) {
		printf("ERREUR AGE INVALIDE \n");
		return 1;
	}

	if (ageUtilisateur > 130) {
		printf("ERREUR AGE IMPROBABLE \n");
		return 1;
	}
		return 0;
}

