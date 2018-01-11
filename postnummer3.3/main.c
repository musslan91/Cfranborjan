#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int postnummer;//Long int med fler bitar och större heltal.

    printf("Skriv ditt postnummer\n");
    scanf("%ld", &postnummer);
    /*För att få bort den näst sista siffran i postnummer delar man postnummer med 1000,*/
    postnummer = postnummer / 1000;

    /*Denna if sats visar vilkoret för att man ska bo i Götaland.*/
    if(postnummer < 62 || postnummer < 20 || postnummer==65 || postnummer==66){
        printf("Du bor i Gotaland");

       }
        /*Denna else if händer ifall första if satsen inte är sann, då bor du istället i Norrland.*/
        else if(postnummer >= 80){
        printf("Du bor i Norrland\n");

       }
            /*Denna else sats kommer alltid att ske ifall de andra if-satserna inte är sanna.*/
            else
            printf("Du bor i Svealand\n");

        return 0;

}
