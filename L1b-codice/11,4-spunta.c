#include <stdio.h>

int main( void ) {
  int n, i, k;
  char simbolo;

  scanf( "%d", &n );

  for ( i = 0; i < n; i++ ) {
    for ( k = 0; k < n+2; k++ ){
      simbolo = ( k+i == n+1 || (k-i==3-n)) ? '*' : '.';
      printf( "%c", simbolo );
    }
    printf( "\n" );
  }

  return 0;
}

/*
Il programma produce il simbolo di spunta su uno sfondo di puntini
(il ramo di sinistra è formato da 3 asterischi e parte dal bordo sinistro
dello schermo, il ramo di destra è formato da n asterischi).
*/