#include <stdio.h>
#include <stdlib.h>

int main(void){
    int h1, m1 ,s1, h2, m2, s2, h, m, s;

    printf("Inserisci il primo orario nel formato a 24 ore hh:mm:ss ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Inserisci il secondo orario nel formato a 24 ore hh:mm:ss ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if(h1 >= 0 && h1 < 24 && m1 >= 0 && m1 < 60 && s1 >= 0 && s1 < 60 && h2 >= 0 && h2 < 24 && m2 >= 0 && m2 < 60 && s2 >= 0 && s2 < 60){
        s= abs((s1+m1*60+h1*3600)-(s2+m2*60+h2*3600));
        h= s/3600;
        s-= h*3600;
        m= s/60;
        s%= 60;
        printf("L’intervallo di tempo compreso tra i due orari è %d:%d:%d\n", h, m, s);
    } else{
        printf("ERRORE\n");
    }  

    return 0;
}

/*
Scrivete un programma che calcoli l’intervallo di tempo compreso
tra due orari. Assumete che sia gli orari che l’intervallo di tempo
siano rappresentati nel formato a 24 ore hh:mm:ss.
E’ possibile usare short int invece che int?
*/