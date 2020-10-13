#include<stdio.h>
#include<ctype.h>

int main(){
    int c;
    
    printf("Inserisci una serie di caratteri terminati da '.': ");

    while ((c= getchar()) != '.' ) {
        if ( isdigit( c ) ) 
	        printf("%c", c);
    }
    printf("\n");
    return 0;
}

/*
Il programma legge una sequenza di caratteri arbitrari terminata da ’.’
e stampa tutte e sole le cifre ivi contenute.
*/