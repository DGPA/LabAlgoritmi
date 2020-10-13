#include <stdio.h>
#define N 10

int main( void) {
    int b, n, i = 0;
    int c[N] = {0}; 
    
    printf("Inserisci un numero intero e la sua nuova base: ");
    scanf( "%d %d", &n, &b );
    
    printf("Conversione");
    do c[i++] = n % b;
        while ( ( n /= b ) > 0 );

    printf("Stampa conversione");
    while ( i > 0 )
        printf( "%d", c[--i] ); 
     
    printf( "\n" ); 
    
    return 0;
}

/*
1. I più significativi per le variabili n e b sono numeroIniziale e base.
2. Il nome più significativo per l'array c è conversione.
3. Il nome più significativo per il programma è conversioneDaDecimaneABaseB.
4. Inserite istruzioni per stampare su standard output dei messaggi esplicativi di cosa fa il programma.
5. Il programma, dati un numero e la sua nuova base, converte e stampa il risultato
6. Se b vale 10, il valore di c[2] in relazione all’intero n è la cifra delle centinaia.
*/