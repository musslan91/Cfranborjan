#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    system("chcp 1252");//svesnk text.
    system("cls");//clear screen

    int resultat[]={0,9,13,15,9,3,7,8,10,20};//Mina element.
    resultat[0]=8;//Satt element 0 �r lika med 8.

        int cnt=1;//R�knare
    for(int i=0;i<10;i++){//For sats och r�knare.
        ++cnt;
        if(cnt==3){
            printf("\n");//Skriver ut en ny rad var tredje varv.
            cnt=0;
        }
    printf("%2d ", resultat[i]);//skriver ut p� sk�rmen med 2 mellanslag arrayen med r�knaren i.
}
    return 0;
}
