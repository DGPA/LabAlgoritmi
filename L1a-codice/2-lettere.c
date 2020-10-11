#include <stdio.h>
#include <ctype.h>

int main( void ) {

  char c;

  printf( "Inserisci un carattere: " );
  scanf( "%c", &c );

  if ( !isalpha (c) )
    printf( "%c non e` una lettera dell'alfabeto italiano\n", c );
  else {
    switch ( tolower( c ) ) {
      case 'a': case 'e': case 'i': case 'o': case 'u':
          printf( "%c e` una vocale dell'alfabeto italiano\n", c );
          break;
  
      case 'x': case 'y': case 'w': case 'j': case 'k':
        printf( "%c non e` una lettera dell'alfabeto italiano\n", c );
        break;
  
      default:
        printf( "%c e` una consonante dell'alfabeto italiano\n", c );
        break;
    }
  }

  return 0;
}
/*
1. Il programma si aspetta in input un carattere.
2. È il file di intestazione che fornisce alcune funzioni
   per l'elaborazione di caratteri e la conversione di lettere
   da maiuscole a minuscole e viceversa.
3. Se l’input è ’a’ il programma stampa
   "a e` una vocale dell'alfabeto italiano" ed infine manda a capo.
   Se l’input è ’b’ il programma stampa
   "b e` una consonante dell'alfabeto italiano" ed infine manda a capo.
   Se l’input è ’y’ il programma stampa
   "y non e` una lettera dell'alfabeto italiano" ed infine manda a capo.
4. Se l’input è un numero compreso tra 0 e 9 il programma stampa
   il carattere di input più " non e` una lettera dell'alfabeto italiano"
   ed infine manda a capo.
5. Se l’input è un segno di punteggiatura il programma stampa
   il carattere di input più " non e` una lettera dell'alfabeto italiano"
   ed infine manda a capo.
6. La funzione isalpha invocata nella riga 11 controlla
   che il char, passato come attributo,
   sia compreso o ugguale tra 'A' e 'Z' o tra 'a' e 'z'.
7. Il programma legge un carattere da standard input,
   lo assegna al char c e stabilisce se c è una lettera,
   nel caso di esito negativo stampa su standard output il valore di c più
   non e` una lettera dell'alfabeto italiano,
   nel caso di una vocale stampa il valore di c più
   e` una vocale dell'alfabeto italiano,
   nel caso c non appartenga all'alfabeto italiano stampa il valore di c più
   non e` una lettera dell'alfabeto italiano,
   altrimenti stampa il valore di c più
   e` una consonante dell'alfabeto italiano.
*/
