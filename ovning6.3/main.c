#include <stdio.h>
#include <stdlib.h>
/*Funktionen summ_siff med parameter int/integer tal. Ett program
som räknar hur många heltal det finns tex 1000 där det då är 4st om
man förutsätter att tal är midre än 0.*/
int siff_sum(int tal){//Siff_sum funktionen med int tal som parameter.
    int sum=0;//int sum som definerat som lika med 0.
    int varv=0;//int varv som definerat som lika med 0.
/*While sats/loop där vilkoret är tal är mindre än 0.
Sedan i loopen tar vi summ är lika med sum plus tal delat med 10 för att få ut heltal
hur många de är. Sedan öker även varven med plus 1.*/
while(tal>0){

    sum=sum+tal%10;
    tal=tal/10;
    varv++;
}
return varv;//Returnerar beräkningen man plussar på i varv.
}


int main()
{
    /*I main functionen kallar jag funktionen siff_summ där k är heltalet man skriver in.*/
    int k;
    printf("Ett heltal? ");
    scanf("%d", &k);
    printf("Siffersumma: %d", siff_sum(k));

    return 0;}
