#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Mina variabler och alla är integers/heltal.*/
    int kvadrat, kubik, tal;
    /*En for sats/loop istället för en while loop. Initiering;villkor;förändring.*/
    for(tal=1;tal<=12;tal++){
        /*Läggs på i loopen och kommer alltid hända varje varv
        tills tal är mindre elelr lika med 12. Då är kvadrat lika med
        tal gånger tal och kubik är lika med tal gånger tal gånger tal.*/
        kvadrat=tal*tal;
        kubik=tal*tal*tal;
        /*Skriver ut alla min variabler en tre integers %d med tre tabs \t.*/
        printf("%d\t%d\t%d\n",tal,kvadrat,kubik);

    }

        return 0;



}
