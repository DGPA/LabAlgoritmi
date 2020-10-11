#include<stdio.h>

int main(void){
    int n, k = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        if (n%i == 0){
            k++;
        }
    }
    if(k == 2){
        printf("Il numero %d è un numero primo\n", n);
    } else {
        printf("Il numero %d non è un numero primo\n", n);
    }
    
    return 0;
}

/*
2. Scrivete un altro programma che, usando un ciclo for, stabilisca se un numero n è primo (ovvero ha per
divisori solo 1 e se stesso) oppure no. Cercate di ridurre il numero di istruzioni da eseguire! Scrivete
una nuova versione del programma precedente usando un ciclo while.
*/