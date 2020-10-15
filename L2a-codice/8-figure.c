#include<stdio.h>
#include<math.h>

typedef struct {
  float x, y;
} Punto;

typedef struct {
  Punto p1;
  Punto p2;
} Rettangolo;

typedef struct {
  Punto o;
  float r;
} Cerchio;

int main( void ){

  float b, h, area, duep;
  Rettangolo r;
  Cerchio c;
  
  printf( "RETTANGOLO:\n" );
  printf( "Inserisci le coordinate del punto in basso a sinistra\n" );
  scanf( "%f%f" , &r.p1.x, &r.p1.y );
  printf( "Inserisci le coordinate del punto in alto a destra\n" );
  scanf( "%f%f", &r.p2.x, &r.p2.y );
  b = r.p2.x - r.p1.x;
  h = r.p2.y - r.p1.y;
  area = b * h;
  duep = 2 * ( b + h );
  printf( "L'area del rettangolo vale %f, il perimetro vale %f\n", area, duep );
  
  printf( "Cerchio:\n" );
  printf( "Inserisci le coordinate del centro\n" );
  scanf( "%f%f" , &c.o.x, &c.o.y );
  printf( "Inserisci la lunghezza del raggio\n" );
  scanf( "%f", &c.r );
  printf( "L'area del cerchio vale %f, il perimetro vale %f\n", M_PI*c.r*c.r, 2*M_PI*c.r);

  return 0;
}

/*
Il programma calcola l’area e il perimetro di un rettangolo
e calcola anche il perimetro e l'area di un cerchio qualunque.
*/