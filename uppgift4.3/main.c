#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ore;
    int dagar=0;

    /*Allt innanf�r for satsen kommer att h�nda om och om igen tills ett villkor
    som ore<=10000000, f�rst initierar man ore=0.01 sen villkoret och sedan �ndringen
    ore=ore*2.*/
    for(ore=0.01;ore<=10000000;ore=ore*2){
            /*Dagar �r lika med dagar +1 l�ggs till i loopen s� det h�nder varje varv
            tills for loopens villkor �r uppfyllt. D� f�r man reda p� hur m�nga dagar det tog.*/
            dagar=dagar+1;
        /*Skriver ut 0.01 float/double variabeln ore i loopen f�r att se hela loopen
        innan man skriver ut utanf�r programmet antal dagar det tog.*/
        printf("%.01f\n", ore);
    }
        /*Skriver ut antal dagar.*/
        printf("Antal dagar: \n%d", dagar);

    return 0;
}
