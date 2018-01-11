#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    /*
    int falt1[a]={50,51,52,53,54,95,96,97,98,99};
    int falt2[b]={5,6,7,8,9,10,11,12,13,14};

    memcpy(falt2, falt1, sizeof(int) * 9);
    */
    int a[100];
    int b[20];
    //Detta sätt är en version hur man kan göra när man kopierar fält med varandra. i 5 for satser.
   for(int i=0;i<100;i++)
       a[i]=i; //i här ska börja på ett och inte noll efter första varvet..

   for(int i=0;i<20;i++)
    b[i]=0;  //i här är lika med noll det första varvet.

    for(int i=0;i<5;i++)
        b[i+10]=a[i+50];//b[i+20] börjar räkna från 10 uppåt fem ggr i och med for satsen. och a[i+20] från 50 uppåt 5 ggr.


    for(int i=0;i<5;i++)
        b[i+5]=a[i+95];//b[i+5] börjar räkna från 5 och uppåt 5 ggr i och med for satsen, även a[i+95] börjar från 95 och uppåt med 5.

    for(int i=0;i<20;i++)//Här skriver man ut ut b-fältet sedan där man vill ha 20 st siffer utskrifter så man ser alla element och vad som har ändrats i dem.
        printf("%5d",b[i]);//Skriver med %5d är lika med 5 mellanrum.
}

