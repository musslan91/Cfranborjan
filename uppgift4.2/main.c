#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Mina variabler och alla �r integers/heltal.*/
    int kvadrat, kubik, tal;
    /*En for sats/loop ist�llet f�r en while loop. Initiering;villkor;f�r�ndring.*/
    for(tal=1;tal<=12;tal++){
        /*L�ggs p� i loopen och kommer alltid h�nda varje varv
        tills tal �r mindre elelr lika med 12. D� �r kvadrat lika med
        tal g�nger tal och kubik �r lika med tal g�nger tal g�nger tal.*/
        kvadrat=tal*tal;
        kubik=tal*tal*tal;
        /*Skriver ut alla min variabler en tre integers %d med tre tabs \t.*/
        printf("%d\t%d\t%d\n",tal,kvadrat,kubik);

    }

        return 0;



}
