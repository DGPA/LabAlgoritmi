#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    int i= 0, k=0;
    char c, frase[100];
    printf("Inserisci una frase terminata da a-capo: ");

    while ((c= getchar()) != '\n'){
        frase[i++]= c;
    }
    frase[i]= '\0';
    printf("%s\n", frase);
    char canc[strlen(frase)];

    for (i = 0; frase[i] != ' '; i++){
        c= frase[i];
    }
    printf("%c\n", c);

    for (i= 0; frase[i] != '\0'; i++){
        if(frase[i] != c){
            canc[k]= frase[i];
            k++;
        }
    }
    canc[k]= '\0';
    
    printf("%s\n", canc);

    return 0;
}

/*
Il programma legge una sequenza di caratteri (terminata da un a-capo)
e la ristampi identica ma saltando tutte le occorrenze dell’ultimo carattere.
Potete assumere che la sequenza contenga al più 100 caratteri.
*/