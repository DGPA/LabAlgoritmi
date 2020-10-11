/* Programma che riceve in input una chiave numerica k (compresa tra 0 e 26), 
seguita da un messaggio, e stampa quest'ultimo in codice usando 
il cifrario di Cesare con chiave k.  */

#include <stdio.h>
#include <ctype.h>

int main( void ) {

  int k;
  char c;

  scanf( "%d ", &k );

  while ( ( c = getchar() ) != '.' ) {

    if ( isalpha( c ) )
      if isupper( c )
        putchar( 'A' + ( c - 'A' + k ) % 26 );
      else
        putchar( 'a' + ( c - 'a' + k ) % 26 );

    else
      putchar( c );
  }

  printf ( "\n" );
  return 0;

}

/*
1. L’output quando il programma riceve da standard input "allo Zoo
   5" è "door Crr
   5"
2. I caratteri che non sono alfabetici non vengono codificati.
   La condizione dell'if nella riga 17.
3. if isupper( c ) 
        putchar( 'A' + ( c - 'A' + k ) % 26 );
   else
        putchar( 'a' + ( c - 'a' + k ) % 26 );
4. if ( c >= 'A' && c <= 'Z' )
5. L’espressione c -’A’ in riga 19 serve a sottrarre il valore di 'A' a c.
6. Il simbolo % in riga 21 indica il modulo, è usato per calcolare il resto.
   Il significato dell’espressione ( c - ’A’ + k ) % 26
   è sottrarre a c il valore di 'A' poi aggiungiamo il valore di k,
   infine calcoliamo il risultato in modulo 26
   per ottenere il valore dello spostamento.
7. Serve per aggiungere al numero dello spostamento il valore di 'A'
   per codificare.
8. I caratteri del messaggio sono memorizzati nella variabile char c.
   Viene tenuto un carattere in memoria alla volta.
*/
