#include <stdio.h> 

int main () {

float note;

do {
printf ("Taper une note entre 0 et 20 \n");
scanf ("%f", &note);
}
while (note < 0 || note > 20);

}
