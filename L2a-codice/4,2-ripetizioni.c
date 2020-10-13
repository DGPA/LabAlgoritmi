#include<stdio.h>
#include<ctype.h>

int main(void){
    int c, f[10]= {0};
    
    printf("Inserisci una serie di caratteri terminati da '.': ");
    
    while ((c= getchar()) != '.' ) {
        if ( isdigit( c ) ){
	        f[c - '0']++;
        }
    }
    for (int i= 0; i < 10; i++){
        if (f[i]>1){
            printf("%d\n", i);
        }
        
    }

    return 0;
}

/*
Il programma stampa tutte e solo le cifre che appaiono ripetute nell’input.
*/