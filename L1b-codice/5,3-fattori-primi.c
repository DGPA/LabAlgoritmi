#include<stdio.h>
#include<math.h>

int main(void){
    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    printf("I numeri primi di %d sono: ", n);
    while(n%2 == 0){
        printf("2 ");
        n= n/2;
    }
    for (int i = 3; i <= sqrt(n); i+=2){
        while(n%i == 0){
            printf("%d ", i);
            n= n/i;
        }
        
    }
    if(n > 2){
        printf("%d", n);
    }
    printf("\n");

    return 0;
}

/*
3. Scrivete un programma che scomponga in fattori primi
un numero dato in input.
*/