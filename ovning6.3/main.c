#include <stdio.h>
#include <stdlib.h>
/*Funktionen summ_siff med parameter int/integer tal. Ett program
som r�knar hur m�nga heltal det finns tex 1000 d�r det d� �r 4st om
man f�ruts�tter att tal �r midre �n 0.*/
int siff_sum(int tal){//Siff_sum funktionen med int tal som parameter.
    int sum=0;//int sum som definerat som lika med 0.
    int varv=0;//int varv som definerat som lika med 0.
/*While sats/loop d�r vilkoret �r tal �r mindre �n 0.
Sedan i loopen tar vi summ �r lika med sum plus tal delat med 10 f�r att f� ut heltal
hur m�nga de �r. Sedan �ker �ven varven med plus 1.*/
while(tal>0){

    sum=sum+tal%10;
    tal=tal/10;
    varv++;
}
return varv;//Returnerar ber�kningen man plussar p� i varv.
}


int main()
{
    /*I main functionen kallar jag funktionen siff_summ d�r k �r heltalet man skriver in.*/
    int k;
    printf("Ett heltal? ");
    scanf("%d", &k);
    printf("Siffersumma: %d", siff_sum(k));

    return 0;}
