#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Double v[0] begränsar inte hur många siffror som kan skrivas in.
    Däremot v[5], kan bara skrivas ut som [0,0,0,0,0] begränsas det att man bara kan skriva ut 5st utskrifter och inget annat.*/
    double v[]={0,0,0,0,0};//Deklarerar fältet.
    int antal=sizeof v/sizeof v[0];
    v[0]=1.5;//ändra det första elementet.
    v[antal-1]=7.3;//ändra det sista elementet.
    int i;

    /*Ändra det sista elementet// Räknar totala antalet som skrivs in ={0,0,0,0,0} alltså 5st
    sen ger den ett värde på den som är näst sist v[antal-1] Skriver man -2 så blir (1.5, 0.0 0.0 0.0 7.3)
    Den flyttas alltså in beroende på vad man sätter som värde på - ex -1 -2 -3 -4*/
    for(i=0;i<antal;i++)
        printf("%.1f ", v[i]);
    return 0;
}
