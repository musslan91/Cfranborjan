#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
/*Heltals int/integers variablerna.*/
int maximatt, minimatt, langd, tjocklek, bredd;

/*Pekar och skriver ut bredd, langd och bredd variablerna sk�rmen
och �ven pekar p� adresserna f�r variablerna. %d &variabelnamn;*/

printf("Skriv in langd\n");
scanf("%d", &langd);

printf("Skriv in tjocklek\n");
scanf("%d", &tjocklek);

printf("Skriv in bredd\n");
scanf("%d", &bredd);
/*Initierar/definerar maximatt och minimatt i ekvationen.*/
maximatt = langd + bredd + tjocklek;
minimatt = langd + bredd + tjocklek;
/*G�r en if sats/Om/Antingen eller, st�mmer m�tten i if-satsen s� �r den okej.
Annars g�r den vidare till else if satsen och d� st�mmer det inte.*/
if(langd <= 600)+(tjocklek <= 100)+bredd <= 900;{
    printf("M�tten OK\n");

}
{
/*H�nder ifall den f�rra programmet med if satsen inte �r okej s� g�ller denna.*/
else if(langd <= 140)+(bredd <= 90)+ tjocklek <= 900;

        printf("M�tten st�mmer inte\n");
    }


    return 0;


}
