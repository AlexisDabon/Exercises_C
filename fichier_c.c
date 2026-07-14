#include <stdio.h>
#include <time.h>

int main () {

int anneeNaissance;
int anneeActuelle;
int age;
time_t tempsBrut;
struct tm *tempsLocal;

time(&tempsBrut);
tempsLocal = localtime(&tempsBrut);
anneeActuelle = tempsLocal->tm_year + 1900;

printf("Entrez votre année de naissance : \n");
scanf("%d", &anneeNaissance);

if (anneeNaissance > anneeActuelle) {
	printf("Erreur \n");
} else {
	age = anneeActuelle - anneeNaissance;
	printf("En %d vous avez %d ans \n", anneeActuelle, age);
}

return 0;

}




