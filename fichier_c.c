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
