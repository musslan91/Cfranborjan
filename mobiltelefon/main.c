#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Mina variabler.*/
    int kostnad, tid, resultat, rabbat;
    /*Skriver ut hur m�nga minuter p� sk�rmen.*/
    printf("Hur m�nga minuter");
    /*Skickar indata fr�n l�saren till %d integer variabeln "tid".*/
    scanf("minuter: %d", &tid);
    /*Likadant h�r fast med integern/heltals variaeln "kostnad".*/
    printf("kostnad per minut");
    /*Indata fr�n avnv�ndaren till variabeln kostnad.*/
    scanf("kostnaden: %d", &kostnad);

    resultat = kostnad * tid; // Definerar resultat variabeln som kostnad variabeln g�nger tid variabeln.
    if(resultat >= 1000)// If sats �r resultat st�rre eller mindre �n 1000.
    //�ppnar et program i programmet med if sats.
    rabbat = resultat * 0.9;// rabbat variabeln = resultat variabeln g�nger 0.9.
    printf("Totala kostnaden: %d", rabbat);
    }// St�nger if sats programmet.

        else /* Else sats som kommer h�nda om inget ovan �r sant.*/
    printf("din kostnad blir%d\n", resultat);
    return 0;
}
