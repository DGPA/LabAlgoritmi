#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    char c1, c2;

    printf("Inserisci due lettere maiuscole: ");
    scanf("%c %c",&c1,&c2);
    if (isupper(c1) && isupper(c2)){
        printf("La distanza nell’ordine alfabetico tra %c e %c è: %d\n", c1, c2, abs(c2-c1));
    } else {
        printf("Ho detto due lettere maiuscole\n");
    }
    
    

    return 0;
}

/*
Scrivete un programma che legga due lettere maiuscole e
stampi la loro distanza nell’ordine alfabetico.
Ad esempio, su ingresso A C, il programma deve stampare 3,
su ingresso F B, il programma deve stampare 5.
Ricordate che i caratteri (char) in C sono rappresentati
come (piccoli) interi e osservate che, secondo la codifica ASCII,
non c’è soluzione di continuità e non ci sono altri caratteri
tra la A e la Z (cosa di cui potete convincervi con il comando man ascii).
*/