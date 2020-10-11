#include <stdio.h>
#include <ctype.h>

int main( void ) {
  char c;

  while ( ( c = getchar() ) != '.' ) {
    if ( isalpha( c ) )
      putchar( toupper( c ) );
    else
      putchar( c );

  printf ( "\n" );
  return 0;
}

/*
1. Il programma si aspetta in input una serie di char, terminati da '.'.
2. Affinché il programma termini deve essere inserito da input '.'.
3. Se l’input viene inserito tutto insieme, l'output sara continuo, invece
   se l'input viene inserito carattere per carattere premendo “invio”,
   l'output sarà separato dall'invio.
4. Il costrutto if nella riga 8 è usato per controllare
   se il carattere passassato sia una lettera.
5. I caratteri letti da standard input sono sovrascritti nell variabile char c.
   Lo spazio di memoria occupato dal programma è di 1 byte per la variabile char usata.
6. Non ci sono limiti sul numero di caratteri
   che possono essere letti dal programma.
7. Il programma legge da standard input una serie di caratteri
   finchè non trova '.', verifica che i caratteri siano delle lettere
   per renderle maiuscole altrimenti lascia invariato il carattere,
   infine stampa le lettere maiuscole e gli altri caratteri.
*/