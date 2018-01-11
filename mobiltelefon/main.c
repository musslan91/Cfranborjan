#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Mina variabler.*/
    int kostnad, tid, resultat, rabbat;
    /*Skriver ut hur många minuter på skärmen.*/
    printf("Hur många minuter");
    /*Skickar indata från läsaren till %d integer variabeln "tid".*/
    scanf("minuter: %d", &tid);
    /*Likadant här fast med integern/heltals variaeln "kostnad".*/
    printf("kostnad per minut");
    /*Indata från avnvändaren till variabeln kostnad.*/
    scanf("kostnaden: %d", &kostnad);

    resultat = kostnad * tid; // Definerar resultat variabeln som kostnad variabeln gånger tid variabeln.
    if(resultat >= 1000)// If sats är resultat större eller mindre än 1000.
    //Öppnar et program i programmet med if sats.
    rabbat = resultat * 0.9;// rabbat variabeln = resultat variabeln gånger 0.9.
    printf("Totala kostnaden: %d", rabbat);
    }// Stänger if sats programmet.

        else /* Else sats som kommer hända om inget ovan är sant.*/
    printf("din kostnad blir%d\n", resultat);
    return 0;
}
