#include <stdio.h>

int main(void){
    char c;
    int k, e=1;
    printf("Stringa: ");

    while((c= getchar())!= '.'){
        if(c=='('){
            k++;
        } else if(c==')'){
            k--;
            if(k<0){
                break;
            }
        }
        e++;
    }
    if(k == 0){
        printf("La stringa è un'espressione ben parentesizzata\n");
    } else {
        (k>0)?
        printf("Carattere %d: mancano parentesi chiuse alla fine!\n", e-1):
        printf("Carattere %d: troppe parentesi chiuse!\n", e);
    }

    return 0;
}

/*
Il programma legge una sequenza di caratteri terminata da . e determina
se essa è un’espressione ben parentesizzata. In caso negativo,
il programma dovrà stampare in quale posizione ha identificato un errore,
e il tipo di errore.
*/