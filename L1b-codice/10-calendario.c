#include <stdio.h>

int main(void){
    int m, g;

    printf("Inserisci il numero del mese (1 = gennaio, ···, 12 = dicembre): ");
    scanf("%d", &m);
    printf("Inserisci il giorno di inizio mese (1 = lunedi, ···, 7 = domenica): ");
    scanf("%d", &g);

    if(m>0 && m<13 && g>0 && g<8){
        printf("L  M  M  G  V  S  D\n");
        switch (m){
            case 2:
                m=28;
                break;
            case 3: case 5: case 9: case 11:
                m= 30;
                break;
            default:
                m= 31;
                break;
        }
        for(int i= 1; i < g; i++){
            printf("   ");    
        }
        for(int i= 1; i <= m; i++){
            if((i+g-1)%7==0){
                printf("%d\n", i);
            }else {
                if(i>9){
                    printf("%d ", i);
                } else {
                    printf("%d  ", i);
                }
            }
        }
        printf("\n");
    } else {
        printf("ERRORE");
    }
    
    return 0;
}
/*
Scrivete un programma che stampi un calendario mensile.
L’utente deve specificare il nome del mese
e il giorno della settimana in cui comincia il mese.
Per semplicità considerate solo anni non bisestili...
*/