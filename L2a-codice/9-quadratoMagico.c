#include <stdio.h>
#define n 5

int main(void){
  int quadrato[n][n] = {{0}}, k = 1;
  int i, j, inew, jnew;
  
  i = 0; j = n/2;
  int nn = n * n;
  for ( k = 1; k <= nn; k++ ) {
    quadrato[i][j] = k;
    inew = ( i == 0 ) ? n - 1 : i - 1;
    /*if (i == 0){
      inew= n-1;
    } else {
      inew= i-1;
    }*/
    jnew = ( j == n - 1 ) ? 0 : j + 1;
    if ( quadrato[ inew ][ jnew ] == 0 ) {
      i = inew;
      j = jnew;
    }
    else {
      i++; 
    }
  }
  int m= n*(n*n+1)/2, somma;
  for (i = 0; i < n; i++){
    somma=0;
    for (j = 0; j < n; j++){
      somma+= quadrato[i][j];
    }if (somma!=m){
      return printf("Errore nelle somme delle righe\n");
    }    
  }
  printf("Verificate le somme delle righe\n");

  for (j = 0; j < n; j++){
    somma=0;
    for (i = 0; i < n; i++){
      somma+= quadrato[i][j];
    }if (somma!=m){
      return printf("Errore nelle somme delle colonne\n");
    }    
  }
  printf("Verificate le somme delle colonne\n");
  
  somma=0;
  for (i = 0; i < n; i++){
    somma+= quadrato[i][i];
  }
  if (somma!=m){
    return printf("Errore nella somma della prima diagonale\n");
  }
  printf("Verificata la somma della prima diagonale\n");
  
  somma=0;
  for (i = 0; i < n; i++){
    somma+= quadrato[i][n-i-1];
  }
  if (somma!=m){
    return printf("Errore nella somma della seconda diagonale\n");
  }
  printf("Verificata la somma della seconda diagonale\n");
  
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      printf("%d\t", quadrato[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

/*
1. n deve essere dichiarato in modo statico. Il valore di n deve essere un numero intero dispari.
2. La variabile k è usata come contatore e rappresenta il prossimo numero da inserire nella matrice.
3. A inew nella riga 8 viene assegnato il valore dell'ultima riga altrimenti il valore della riga precedente.
4. Riscrivete l’assegnamento nella riga 8 usando il costrutto if invece dell’operatore ternario.
5. Senza eseguire il programma al computer, tracciatene l’esecuzione quando n è pari a 5.
6. Verificate la correttezza della vostra risposta al punto precedente, completando il programma con la stampa
   del quadrato magico.
7. Si parte mettendo il numero 1 al centro della prima riga. Si compila la colonna seguente del numero uno (a destra)
   e ad una fila superiore. Se siete già alla fila superiore, si compila una colonna alla destra nella fila inferiore.
   Se siete nella colonna di estrema destra, si compila il numero seguente nella colonna di estrema sinistra, una fila in su.
   Se il quadrato già è occupato da un numero più piccolo, si posiziona il numero seguente nel quadrato immediatamente sotto all'ultimo immesso;
   si procede in tal maniera fino a comporre tutto il quadrato.
8. Completate il codice in modo da verificare che su ogni riga, su ogni colonna e sulle due diagonali la somma
   dei numeri sia la stessa. (Tale somma in un qualunque quadrato magico di dimensione n deve valere n*(n*n+1)/2)
*/