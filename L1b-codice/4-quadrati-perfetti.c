#include<stdio.h>

#define m 10

int main(void){
    for (int i = 1; i <= m; i++){
        printf("%d*%d= %d\n", i, i, i*i);
    }
    return 0;
}

/*
Scrivete un programma che stampi la sequenza crescente
dei primi 10 quadrati perfetti (ossia numeri x tali che x=y^2
per qualche numero naturale y). Usate una macro di valore 10
per rendere il programma più facile da modificare!
*/