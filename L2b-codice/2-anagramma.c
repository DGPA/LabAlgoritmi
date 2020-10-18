#include <stdio.h>
#include <ctype.h>
#define N 26

int main (void){
    int parole1[N]= {0}, parole2[N]= {0};
    char c;

    while ((c= getchar())!=','){
        if(isalpha(c)){
            (isupper(c))? (parole1[c-'A']++) : (parole1[c-'a']++);
        }
    }
    while ((c= getchar())!='.'){
        if(isalpha(c)){
            (isupper(c))? (parole2[c-'A']++) : (parole2[c-'a']++);
        }
    }

    for (int i= 0; i < N; i++){
        if (parole1[i] != parole2[i]){
            printf("Non sono anagrammi");
            return 0;
        }
    }
    printf("Sono anagrammi");
    return 0;
}

/*
Il programma legge due parole e verifica se sono anagrammi
[Due parole costituiscono un anagramma se l’una si ottiene
dall’altra permutando le lettere (es: attore, teatro)].
*/