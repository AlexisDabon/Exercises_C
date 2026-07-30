#include <stdio.h>
#include <stdbool.h>

#define NOTE_MIN 0.0f
#define NOTE_MAX 20.0f

void vider_tampon(void) {
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

float saisir_note(void) {
	float note;
	int retour_scanf;

	while (true) {

	printf("Veuillez saisir une note entre %.1f et %.1f \n", NOTE_MIN, NOTE_MAX);
	retour_scanf = scanf("%f", &note);

	if (retour_scanf != 1) {
		printf("Saisis invalide, veuillez saisir une note \n");
		vider_tampon();
		continue;
	}

	if (note >= NOTE_MIN && note <= NOTE_MAX) {
		vider_tampon();
		return note;
	} else { 
		printf("Erreur: La note doit être comprise entre %.1f et %.1f.\n", NOTE_MIN, NOTE_MAX);
		}
	}
}

int main(void) {

float note_valide;

	printf("--- Programme de saisie sécurisée --- \n");
	note_valide = saisir_note();
	printf("\n Note enregistrée avec succès : %.2f \n", note_valide); 

return 0;

}
