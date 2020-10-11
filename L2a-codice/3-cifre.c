#include <stdio.h>
#include <ctype.c>

int main(void){
    int c, f[10]= {0};
    
    printf("Inserisci una serie di caratteri terminati da '.': ");
    printf("Assegno a c il valore in intero del primo carattere inserito\n");
    c= getchar();
    printf("Controllo che c sia diverso dal valore in intero di '.'\n");
    while ( c != '.' ) {
        printf("Controllo che il valore di c in ASCII sia un numero\n");
        if ( isdigit( c ) ){
            printf("Aumento di 1 la posizione c, ottenuta convertendolo in un numero compreso tra 0 e 9, dell'array f\n");
	        f[ c - '0' ]++;
        }
        printf("Assegno a c il valore in intero del successivo carattere inserito\n");
	    c= getchar();
        printf("Controllo che c sia diverso dal valore in intero di '.'\n");
    }
}

/*
1. L'espressione c - ’0’ indica sottrare a c il valore in numero intero di '0'.
2. L’istruzione nella riga 6 incrementa di 1 la posizione dell'array f,
   trovata convertendo il numero di c da ASCII a intero.
3. Il valore f[i] è il numero di volte in cui è stato inserito il numero i.
4. Un nome più significativo dell’array f è ripNum.
5. Inserite istruzioni per stampare su standard output dei messaggi esplicativi
   di cosa fa questa porzione di codice.
6. Il programma conta quante volte è stato inserito un numero da 0 a 9.
*/