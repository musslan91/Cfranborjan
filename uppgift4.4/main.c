#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Mina variabler so alla �r integers/heltal.*/
    int rader;
    int kolumns;
    int n;

    /*scanna in adressen f�r n variabeln och fr�ga vilken siffra man vil skriva in.*/
    printf("Skriv siffra\n");
    scanf("%d", &n);

    /*Tv� for satser/loopar med initiering;villkor;�ndring;
    Yttre for satsen f�rrader �r lika med 1, rader mindre eller lika med n
    och rader++/+1.*/
    for(rader=1;rader<=n;rader++){
        /*Sedan k�rs ett program till den inre for satsen initiering av kolumns �r lika med 1,
        Villkor f�r kolumns mindre eller lika med rader och �ndring kolumner++/+1.*/
        for(kolumns=1;kolumns<=rader;kolumns++)
        /*Printar ut integern n * kolumns.*/
            printf("%d ", n*kolumns);

    printf("\n");

    }


    return 0;
}
