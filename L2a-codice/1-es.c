#include <stdio.h>

#define LENGTH 100

int main( void) {

    int a[LENGTH], i, lun;

    for( i = 0; i < LENGTH; i++ ) {
        scanf( "%d", &a[i] );
        if ( a[i] == 0 )
            break;
    }

    lun = i;

    for( i = lun -1; i > 0; i-- )
        printf( "%d ", a[i] );

    printf( "%d\n", a[0] );
    return 0;
}

/*
Il programma legge una serie di int da standard input e li inizializza
nell'array a, di lunghezza 100, fino all'inserimento di uno 0
o fino alla fine. Infine stampa dall'ultima posizione inizializzata fino
all'inizio dell'array
*/