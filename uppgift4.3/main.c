#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ore;
    int dagar=0;

    /*Allt innanför for satsen kommer att hända om och om igen tills ett villkor
    som ore<=10000000, först initierar man ore=0.01 sen villkoret och sedan ändringen
    ore=ore*2.*/
    for(ore=0.01;ore<=10000000;ore=ore*2){
            /*Dagar är lika med dagar +1 läggs till i loopen så det händer varje varv
            tills for loopens villkor är uppfyllt. Då får man reda på hur många dagar det tog.*/
            dagar=dagar+1;
        /*Skriver ut 0.01 float/double variabeln ore i loopen för att se hela loopen
        innan man skriver ut utanför programmet antal dagar det tog.*/
        printf("%.01f\n", ore);
    }
        /*Skriver ut antal dagar.*/
        printf("Antal dagar: \n%d", dagar);

    return 0;
}
