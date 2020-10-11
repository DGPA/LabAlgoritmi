#include <stdio.h>
#include <math.h>

int main( void ) {
  float a, b, c, d, x1, x2;
  printf("Inserisci i coefficienti nella forma ax^2+bx+c: ");
  scanf("%f %f %f", &a, &b, &c);
  
  if(a != 0 && b != 0 && c != 0){
    d= b*b-4*a*c;
    x1= (-b-sqrt(d))/(2*a);
    x2= (-b+sqrt(d))/(2*a);
  }
  printf("x1= %.1f\nx2=%.1f\n", x1, x2);
  return 0;
}

/*
Scrivete un programma che legga tre coefficienti a,b, c e
calcoli le soluzioni (complesse) dell’equazione ax^2 + bx+c.
Può essere utile includere il file di intestazione math.h
della libreria standard,
contenente la funzione sqrt per il calcolo della radice quadrata.
Quando compilate, usate l’opzione -lm.
*/
