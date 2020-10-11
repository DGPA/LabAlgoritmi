#include <stdio.h>
#define MAX 1000

int main( void ) {
  int min = 0, max = MAX, n;
  char risposta;

  for ( ; ; ) {
    n = min + ( max - min ) / 2;
    printf( "Il numero e` %d? ", n );
    scanf( " %c", &risposta );
    switch ( risposta ) {
      case '<': max = n - 1; break;
      case '>': min = n + 1; break;
      case '=': return 0;
    }
    /*printf( "max = %d, min = %d\n", max, min );*/
  }

  return 0;
}

/*
1. La strategia usata dal programma per indovinare il numero consiste
   nell'iniziare la ricerca dal centro per poi continuare la ricerca
   nella metà superiore o inferiore a seconda della risposta ricevuta.
2. Se il programma venisse modificato sostituendo la riga 11 con la seguente
   scanf( "%c", &risposta ); il programma prenderebbe in input lo spazio lasciato dal printf della riga precedente.
3. Se il programma venisse modificato sostituendo la riga 11 con la seguente
   scanf( "%c ", &risposta ); il programma si aspetterebbe uno spazio dopo il carattere da leggere.
   Legge caratteri finché non si inserisce lo spazio.
4. Lo scanf serve per filtrare il contenuto del buffer.
*/