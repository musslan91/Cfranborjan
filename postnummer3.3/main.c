#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int postnummer;//Long int med fler bitar och st�rre heltal.

    printf("Skriv ditt postnummer\n");
    scanf("%ld", &postnummer);
    /*F�r att f� bort den n�st sista siffran i postnummer delar man postnummer med 1000,*/
    postnummer = postnummer / 1000;

    /*Denna if sats visar vilkoret f�r att man ska bo i G�taland.*/
    if(postnummer < 62 || postnummer < 20 || postnummer==65 || postnummer==66){
        printf("Du bor i Gotaland");

       }
        /*Denna else if h�nder ifall f�rsta if satsen inte �r sann, d� bor du ist�llet i Norrland.*/
        else if(postnummer >= 80){
        printf("Du bor i Norrland\n");

       }
            /*Denna else sats kommer alltid att ske ifall de andra if-satserna inte �r sanna.*/
            else
            printf("Du bor i Svealand\n");

        return 0;

}
