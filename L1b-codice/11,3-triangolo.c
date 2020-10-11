#include <stdio.h>

int main( void ) {
  int n, i, k;
  char simbolo;

  scanf( "%d", &n );

  for ( i = 0; i < n; i++ ) {
    for ( k = 0; k < n; k++ ){
      if (i==k){
        printf("| ");
      } else {
        simbolo = ( k>i ) ? '+' : 'o';
        printf( "%c ", simbolo );
      }
    }
    printf( "\n" );
  }

  return 0;
}

/*
Il programma produce un triangolo sotto la diagonale con direzione alto/sx verso basso/dx è formato da o, il triangolo sopra la
diagonale da +, la diagonale da |.
*/