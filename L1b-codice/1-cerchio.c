#include<stdio.h>
#include<math.h>

int main( void ) {
  float r;
  printf("Inserisci il raggio: ");
  scanf("%f", &r);
  printf("Area= %.1f\n", M_PI*r*r );
  return 0;
}

/*
Scrivete un programma che legga (in una variabile di tipo float)
il raggio di un cerchio e ne stampi l’area.
Tenete presente che il file math.h della libreria standard
contiene la definizione della costante M_PI, pari al
valore di π (il rapporto tra la circonferenza ed il diametro).
Quando compilate, usate l’opzione -lm.
*/
