#include <stdio.h>
#include <limits.h>

int main(void) {
    int a;
    long b;
    short c;
    char d;

    printf("INT: size: %ld, range: %d ... %d\n", sizeof(a), INT_MIN, INT_MAX);
    printf("LONG: size: %ld, range: %ld ... %ld\n", sizeof(b), LONG_MIN, LONG_MAX);
    printf("SHORT: size: %ld, range: %d ... %d\n", sizeof(c), SHRT_MIN, SHRT_MAX);
    printf("CHAR: size: %ld, range: %d ... %d\n", sizeof(d), CHAR_MIN, CHAR_MAX);
    return 0;
}

/*
Il programma dichiara una variabile per ciascuno dei tipi fondamentali
e delle sue rispettive varianti long e short, e ne stampi
la dimensione in byte ottenuta tramite l’operatore
sizeof e l’intervallo di valori possibili per tali tipi.
*/