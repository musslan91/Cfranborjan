#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Mina variabler.*/
    float meter, stilla = 1, studsar;
    /*Skriver ut en sträng.*/
    printf("Vilken hojd i meter vill du slappa bollen?\n");
    /*Scannar in float %f & pekar på adressen variabeln meter.*/
    scanf("%f", &meter);
    /*För att få meter till cm tar man meter variabeln och delar den variabeln med 100.*/
    meter = meter * 100;

    /*En loop, om meter är större eller lika med stilla. Så händer resten av funktionerna i
    while loopen där man bestämt studsar=studsar+1 där man plussar studsar med 1 och sedan
    meter multiplicerar man med 0.7 för att den ska sjunka med 30% vid varje studs.*/
    while(meter >= stilla ){
            studsar=studsar+1;
            meter = meter * 0.7;
            /*Sedan printar jag inte ut i loopen för att inte behöva se allt som händer inuti den.*/
    }
        /*Printar ut strängen och satt float variabeln till 1 decimal.*/
        printf("Bollen stannar efter %0.1f studsar\n", studsar);

    return 0;//Skickar tillbaka ett heltal.


}
