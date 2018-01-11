#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	/* Variabler.*/
	int tal, prisex, prisin;
	
	/* scannar in variabeln tal.*/
	printf("Skriv ett tal för att få ett pris exclusive moms\n");
	scanf("%d", &tal); // Scanf %d pekar på variabeln för att sedan &tal kunna skriva ut siffror/ett värde.
	/* definerar variablerna prisex och prisin.*/
	prisex = tal * 0.75;
	prisin = tal * 1;
	
	/* printar ut i strängen variabeln prisex.*/
	printf("Skriv ett tal för att få ett pris exclusive moms%d\n", prisex);
	
	/* printar ut i strängen variabeln prisin.*/
	printf("skriv ett tal för att få ett pris inklusive moms%d\n", prisin);

	
	
	int tal, pris, moms, momsdel;

	// %d = för att kunna skriva ut heltal, & = Ger en variabel ett värde
	printf("Datorn kostade?\n");
	scanf("%d",&tal);

	printf("Hur mkt moms?\n");
	scanf("%d",&moms);

	// Formeln för att räkna ut vad momsen blir med 25 avdrag
	momsdel = tal*moms/100;
	pris = tal - momsdel;


	// Räknar ut vad de kostat baserat på pris och tal 
	printf("Momsdelen%d",momsdel);
	printf("\nUtan moms kostar datorn:%d",pris);


    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}