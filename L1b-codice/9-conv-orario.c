#include <stdio.h>

int main (void){
    int h, m, am=1;
    printf("Inserisci l'orario nel formato a 24 ore hh:mm: ");
    scanf("%d:%d", &h, &m);
    if(h >= 0 && h < 24 && m >= 0 && m < 60){
        if(h>12){
            h-= 12;
            am=0;
        }
        if(am==1){
            printf("L'orario nel formato a 12 ore è: %d:%d AM \n", h, m);
        }else{
            printf("L'orario nel formato a 12 ore è: %d:%d PM \n", h, m);
        }
    }else{
        printf("ERRORE\n");
    }
    
    return 0;
}

/*
Scrivete un programma che, dato un orario in formato a 24 ore hh:mm,
fornisca il corrispondente orario nel formato AM/PM e viceversa.
*/