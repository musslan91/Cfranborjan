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
    //Detta s�tt �r en version hur man kan g�ra n�r man kopierar f�lt med varandra. i 5 for satser.
   for(int i=0;i<100;i++)
       a[i]=i; //i h�r ska b�rja p� ett och inte noll efter f�rsta varvet..

   for(int i=0;i<20;i++)
    b[i]=0;  //i h�r �r lika med noll det f�rsta varvet.

    for(int i=0;i<5;i++)
        b[i+10]=a[i+50];//b[i+20] b�rjar r�kna fr�n 10 upp�t fem ggr i och med for satsen. och a[i+20] fr�n 50 upp�t 5 ggr.


    for(int i=0;i<5;i++)
        b[i+5]=a[i+95];//b[i+5] b�rjar r�kna fr�n 5 och upp�t 5 ggr i och med for satsen, �ven a[i+95] b�rjar fr�n 95 och upp�t med 5.

    for(int i=0;i<20;i++)//H�r skriver man ut ut b-f�ltet sedan d�r man vill ha 20 st siffer utskrifter s� man ser alla element och vad som har �ndrats i dem.
        printf("%5d",b[i]);//Skriver med %5d �r lika med 5 mellanrum.
}

