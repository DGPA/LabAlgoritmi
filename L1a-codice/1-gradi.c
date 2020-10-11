#include <stdio.h>

#define FATTORE_SCALA ( 5.0f / 9.0f )
#define ZERO 32.0f

int main( void ){
	float fahr, cels;
	printf( "Inserisci la temperatura in gradi Fahrenheit: " );
	scanf( "%f", &fahr );
	cels = ( fahr - ZERO ) * FATTORE_SCALA;
	printf( "Gradi Celisus equivalenti: %.1f\n", cels );
	return 0;
}
/* 
conversione da gradi Fahrenheit: 
celsius = (fahr - 32) * 5/9 
*/
/*
1. Stampa "Inserisci la temperatura in gradi Fahrenheit: ".
2. Legge un float da input e lo assegna alla variabile fahr.
3. Immagazzinare in un float il valore in Celsius. Non è necessaria.
   Rimuovo la variabile cels nella riga 7,
   sostituisco le righe 10 e 11 con questa riga
   printf("Gradi Celisus equivalenti: %.1f\n", (fahr-ZERO)*FATTORE_SCALA);.
4. A rendere il codice più chiaro. Si, possono essere omesse le parentesi.
5. Si è possibile sostituire 5.0 con 5. Si è possibile sostituire 9.0 con 9.
   Si è possibile sostituirli entrambi contemporaneamente.
*/
