#include <stdio.h>
#include <ctype.h>

int main(void){
    char c, cesare[100];
    int i= 0, k;

    printf("Inserisci la frase da criptare terminata da '.': ");

    while ((c= getchar()) != '.'){
        cesare[i++]= c;
    }
    cesare[i]= '\0';

    printf("Inserisci la chiave: ");
    scanf("%d", &k);
    for (i= 0; cesare[i] != '\0'; i++){
        cesare[i]= (isalpha(cesare[i]))?
            (isupper(cesare[i]))?
                ('A' + (cesare[i] - 'A' + k ) % 26) : ('a' + ( cesare[i] - 'a' + k ) % 26): cesare[i];
    }    
    printf("%s\n", cesare);
    return 0;
}

/*
Il programma legge (usando getchar) un testo da cifrare,
sotto forma di una sequenza di caratteri terminata da un punto,
poi legge (usando scanf) la chiave di cifratura k e quindi
stampa il testo cifrato usando il cifrario di Cesare con chiave k.
*/