#include <stdio.h>
#include <ctype.h>
#define N 26

int main (void){
    int lettere[N]= {0};
    char c;

    while ((c= getchar())!='.'){
        if(isalpha(c)){
            (isupper(c))? (lettere[c-'A']++) : (lettere[c-'a']++);
        }
    }

    for (int i= 0; i < N; i++){
        if (lettere[i]>0){
            printf("%c ", 'A'+i);
            for (int k = 0; k < lettere[i]; k++){
                printf("*");
            }            
            printf("\n");
        }
    }
    
    return 0;
}

/*
Il programma legge una sequenza di caratteri terminata da un punto e che visualizzi un istogramma
con una barra per ogni carattere dell’alfabeto, lunga quanto il numero delle sue occorrenze. Il programma non
deve visualizzare le barre delle lettere che non compaiono e non deve fare distinzione fra maiuscole e minuscole
(a tal fine potete usare le funzioni dichiarate nel file ctype.h).

1. Non è necessario memorizzare l’intera frase di input.
2. Serve memorizzare le ripetiaioni delle lettere nell'array.
3. Le variabili nel mio programma sono 29.
4. Lo spazio di memoria occupato è di 29*4 byte e non cresce al crescere dell’input.
5. Il numero di operazioni stimate che svolge il mio programma è .
*/