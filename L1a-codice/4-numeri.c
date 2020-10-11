#include <stdio.h>

int main( void ) {
  int n, x = 0;
  printf( "Inserisci una serie di numeri: " );

  do {
    scanf( "%d", &n );
    x = x + n;
  } while ( n != 0);

  printf( "%d\n", x );
  return 0;

}

/*
1. Il programma si aspetta in input una serie di numeri interi, terminati da 0.
2. Affinché il programma termini deve essere passato da input il numero 0.
3. La variabile x rappresenta la somma della serie di numeri interi.
4. I numeri letti da standard input sono sovrascritti nella variabile int n.
   Lo spazio di memoria occupato dal programma è di 8 byte,
   4 byte per ogni variabile int usata.
5. Il programma legge da standard input una serie di numeri interi,
   calcola la loro somma finché non viene inserito uno 0
   e stampa il risultato.
6. Aggiungere l'attributo int i e assegnarli 0 alla riga 4,
   aggiungere l'istruzione i++; al ciclo do while,
   infine aggiungere alla condizione del while && i != 10
*/
