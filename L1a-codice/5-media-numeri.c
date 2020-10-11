#include <stdio.h>

int main( void ) {
  int n, x = 0, i = -1;
  printf( "Inserisci una serie di numeri: " );

  do {
    scanf( "%d", &n );
    x += n;
    i++;
  } while ( n != 0);

  printf( "%d\n", x / i);
  return 0;

}

/*
Calcola la media dei numeri inseriti.
*/