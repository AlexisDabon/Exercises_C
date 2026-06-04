#include <stdio.h> 

int main () {

float note;

do {
printf ("Tapez une note entre 0 et 20 \n");
scanf ("%f", &note);
}
while (note < 0 || note > 20);

printf ("la note est de : %.2f.\n", note); 

return 0;
}
