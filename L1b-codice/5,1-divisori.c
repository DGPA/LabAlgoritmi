#include<stdio.h>

int main(void){
    int n, k = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        if (n%i == 0){
            printf("%d ", i);
            k++;
        }
    }
    printf("\nIl numero di divisori di %d è %d\n", n, k);
    return 0;
}

/*
1. Scrivete un programma che stampi la sequenza decrescente dei numeri divisori di n, dove n è un numero
inserito in input. Modificate il programma in modo che stampi anche il numero di divisori di n.
*/