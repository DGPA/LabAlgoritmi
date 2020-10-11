#include <stdio.h>

int main( void ) {
  int n, i, k;
  char simbolo;

  scanf( "%d", &n );

  for ( i = 0; i < n; i++ ) {
    for ( k = 0; k < n; k++ ){
      simbolo = ( (i+k) % 2 ) ? '+' : 'o';
      printf( "%c ", simbolo );
    }
    printf( "\n" );
  }

  return 0;
}

/*
Il programma produce delle figure in cui si alternano i caratteri o e +.
*/