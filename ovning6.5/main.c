#include <stdio.h>
#include <stdlib.h>
/*En bool som antingen är sant eller falskt. En funktion där peronnummer delat med 10 och
sedan returnerar man istället ett så kallat sanningsvärde. Long long int för 12 siffror kolla ifall det
är jämt delat på två och om rest är 0 är du kvinna och om det är ett så är du man. */
_Bool ar_kvinna(long long int personnummer){
personnummer=personnummer/10;
return personnummer %2==0;

}

int main()
{
    /*If sats där man lägger in funktionen ar_kvinna.*/
    long long int personnummer;
    printf("skriv personnummer");
    scanf("%lld", &personnummer);
    if(ar_kvinna(personnummer)){

        printf("Du är kvinna");
    }else{
        printf("Du är en man");

    }

    return 0;
}
