#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
/*Heltals int/integers variablerna.*/
int maximatt, minimatt, langd, tjocklek, bredd;

/*Pekar och skriver ut bredd, langd och bredd variablerna skärmen
och även pekar på adresserna för variablerna. %d &variabelnamn;*/

printf("Skriv in langd\n");
scanf("%d", &langd);

printf("Skriv in tjocklek\n");
scanf("%d", &tjocklek);

printf("Skriv in bredd\n");
scanf("%d", &bredd);
/*Initierar/definerar maximatt och minimatt i ekvationen.*/
maximatt = langd + bredd + tjocklek;
minimatt = langd + bredd + tjocklek;
/*Gör en if sats/Om/Antingen eller, stämmer måtten i if-satsen så är den okej.
Annars går den vidare till else if satsen och då stämmer det inte.*/
if(langd <= 600)+(tjocklek <= 100)+bredd <= 900;{
    printf("Måtten OK\n");

}
{
/*Händer ifall den förra programmet med if satsen inte är okej så gäller denna.*/
else if(langd <= 140)+(bredd <= 90)+ tjocklek <= 900;

        printf("Måtten stämmer inte\n");
    }


    return 0;


}
