#include <stdio.h>

#define L 100

int main(void){
    char s[100], c;
    int i= 0;

    printf("Inserisci una stringa terminata da '.': ");
    while ((c= getchar()) != '.'){
        s[i]= c;
        i++;
    }
    s[i]= '\0';

    for (int k= 0; k < i; k++){
        i--;
        if (s[k] != s[i]){
            i= -1;
            break;
        }    
    }

    printf("%s%s %s\n", s, (i>0)?"":" non","è palindroma");
    return 0;
}

/*
Il programma legge una stringa terminata da '.' e stabilisce se è palindroma.
*/