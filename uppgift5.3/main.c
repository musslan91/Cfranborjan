#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Mina variabler alla heltal/integers.*/
    int n;//Talet man skriver in.
    int talet=1;//Definerat talet är lika med 1 och jämnt delbart med 1 och sig själv är det primtal.
    int k;//Kollar ifall det inte är primtal.
    int antal=0; //Antalet funna primtal.

    /*Skriver ut i strängen så "Talet" syns på skärmen.*/
    printf("Talet?");
    /*Peka på och hämta data till adressen/integern n.*/
    scanf("%d", &n);

    /*For sats för att se ifall talet är ett primtal. För talet definerar man lika med 1;
    villkor talet är mindre eller lika med n/Talet man skriver in; och sedan förändringen talet++/+1.*/
    for(talet=1; talet<=n; talet++){
       _Bool ar_primtal=1;//Den kollar om det är primtal. Primtal är lika med delbar med utan rest, bara jämna tal.
                            //Primtal är lika med alla tal större än 1 som endast är jämnt delbara med talet 1 och med sig själva.


        /*Om det inte är ett primtal så går han vidare hit och kör denna loop.
        Om variabeln k i denna funktion är lika med 2 så kan det inte vara ett primtal.*/
        for(k=2;k<talet;k++)
            /*Om k är jämnt delbart med 2 kan det inte vara ett primtal och då är primtal.*/
            if(talet % k==0)
            ar_primtal=0;
        if(ar_primtal){
        /*Den räknar upp hur många primtal som finns upp tom. 10 och bryter sedan en ny rad.*/
        antal++;
        printf("%  d", talet);
        /*Den räknar ut hur många rader det kommer vara innan den gör en radbrytning med print \n newline.*/
        if(antal%10==0)
        printf("\n");
        }

}
    return 0;
}
