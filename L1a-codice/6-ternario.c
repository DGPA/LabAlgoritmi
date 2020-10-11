#include <stdio.h>

int main( void ) {
  int a, b;

  printf( "Inserisci due numeri interi: " );
  scanf( "%d%d", &a, &b );
  printf( "Il numero maggiore tra %d e %d e` %d.\n", a, b, a > b ? a : b );

  return 0;
}

/*
Il programma legge da standard input due numeri interi
e stabilisce qual'è il numero maggiore
stampando su standard output il risultato.
*/
