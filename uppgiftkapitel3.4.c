#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    /* Mina variabler.*/
    long long int personnummer, kille = 0, tjej = 1;
    /* Skriver ut personnummer på skärmen.*/
    printf("Skriv personnummer\n");
    /*Hämtar in data till personnummer variabeln.
    Som är long long int/lld som är +- 10^18 bitar*/
    scanf("%lld", &personnummer);

    /*Dividerar personnummer med 10. Vilket går att läsa in
    i personnummer variabeln.*/
    personnummer = personnummer / 10;

    /*Gör en if sats/om sats ungefär på svenska.
    Identifierar om personnummer sista två siffror
    är dividerat på två lika med jämt och då lika med kille.*/
    if(personnummer % 2 == kille)
	{
		/*Skriver ut att de stämmer på skärmen-*/
		printf("Det stämmer");
	}
	/*Om inte, startar detta program som om det är
	ojämt och då lika med tjej.*/
	else if(personnummer %2 == tjej)
	{
	    /*Skriver ut "Det inte stämmer" till skärmen*/
        printf("Det stämmer inte.");
	}
	/*Returnerar integer/heltal 0.*/
    return 0;
}
