#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Mina variabler alla heltal/integers.*/
    int n;//Talet man skriver in.
    int talet=1;//Definerat talet �r lika med 1 och j�mnt delbart med 1 och sig sj�lv �r det primtal.
    int k;//Kollar ifall det inte �r primtal.
    int antal=0; //Antalet funna primtal.

    /*Skriver ut i str�ngen s� "Talet" syns p� sk�rmen.*/
    printf("Talet?");
    /*Peka p� och h�mta data till adressen/integern n.*/
    scanf("%d", &n);

    /*For sats f�r att se ifall talet �r ett primtal. F�r talet definerar man lika med 1;
    villkor talet �r mindre eller lika med n/Talet man skriver in; och sedan f�r�ndringen talet++/+1.*/
    for(talet=1; talet<=n; talet++){
       _Bool ar_primtal=1;//Den kollar om det �r primtal. Primtal �r lika med delbar med utan rest, bara j�mna tal.
                            //Primtal �r lika med alla tal st�rre �n 1 som endast �r j�mnt delbara med talet 1 och med sig sj�lva.


        /*Om det inte �r ett primtal s� g�r han vidare hit och k�r denna loop.
        Om variabeln k i denna funktion �r lika med 2 s� kan det inte vara ett primtal.*/
        for(k=2;k<talet;k++)
            /*Om k �r j�mnt delbart med 2 kan det inte vara ett primtal och d� �r primtal.*/
            if(talet % k==0)
            ar_primtal=0;
        if(ar_primtal){
        /*Den r�knar upp hur m�nga primtal som finns upp tom. 10 och bryter sedan en ny rad.*/
        antal++;
        printf("%  d", talet);
        /*Den r�knar ut hur m�nga rader det kommer vara innan den g�r en radbrytning med print \n newline.*/
        if(antal%10==0)
        printf("\n");
        }

}
    return 0;
}
