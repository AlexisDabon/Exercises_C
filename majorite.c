#include <stdio.h> 

int main () {
	int ageUtilisateur;
	printf(" Quel âge avez vous ? ");
	scanf("%d" , &ageUtilisateur);
	if (ageUtilisateur >=18) {
		printf("vous êtes majeur \n");
	}
	else {
	        printf("vous êtes mineur");
	}
		return 0;
}

