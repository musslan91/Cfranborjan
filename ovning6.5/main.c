#include <stdio.h>
#include <stdlib.h>
/*En bool som antingen �r sant eller falskt. En funktion d�r peronnummer delat med 10 och
sedan returnerar man ist�llet ett s� kallat sanningsv�rde. Long long int f�r 12 siffror kolla ifall det
�r j�mt delat p� tv� och om rest �r 0 �r du kvinna och om det �r ett s� �r du man. */
_Bool ar_kvinna(long long int personnummer){
personnummer=personnummer/10;
return personnummer %2==0;

}

int main()
{
    /*If sats d�r man l�gger in funktionen ar_kvinna.*/
    long long int personnummer;
    printf("skriv personnummer");
    scanf("%lld", &personnummer);
    if(ar_kvinna(personnummer)){

        printf("Du �r kvinna");
    }else{
        printf("Du �r en man");

    }

    return 0;
}
