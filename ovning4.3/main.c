#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Mina variabler.*/
    float meter, stilla = 1, studsar;
    /*Skriver ut en str�ng.*/
    printf("Vilken hojd i meter vill du slappa bollen?\n");
    /*Scannar in float %f & pekar p� adressen variabeln meter.*/
    scanf("%f", &meter);
    /*F�r att f� meter till cm tar man meter variabeln och delar den variabeln med 100.*/
    meter = meter * 100;

    /*En loop, om meter �r st�rre eller lika med stilla. S� h�nder resten av funktionerna i
    while loopen d�r man best�mt studsar=studsar+1 d�r man plussar studsar med 1 och sedan
    meter multiplicerar man med 0.7 f�r att den ska sjunka med 30% vid varje studs.*/
    while(meter >= stilla ){
            studsar=studsar+1;
            meter = meter * 0.7;
            /*Sedan printar jag inte ut i loopen f�r att inte beh�va se allt som h�nder inuti den.*/
    }
        /*Printar ut str�ngen och satt float variabeln till 1 decimal.*/
        printf("Bollen stannar efter %0.1f studsar\n", studsar);

    return 0;//Skickar tillbaka ett heltal.


}
