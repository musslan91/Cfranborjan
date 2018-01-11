#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Mina variabler so alla är integers/heltal.*/
    int rader;
    int kolumns;
    int n;

    /*scanna in adressen för n variabeln och fråga vilken siffra man vil skriva in.*/
    printf("Skriv siffra\n");
    scanf("%d", &n);

    /*Två for satser/loopar med initiering;villkor;ändring;
    Yttre for satsen förrader är lika med 1, rader mindre eller lika med n
    och rader++/+1.*/
    for(rader=1;rader<=n;rader++){
        /*Sedan körs ett program till den inre for satsen initiering av kolumns är lika med 1,
        Villkor för kolumns mindre eller lika med rader och ändring kolumner++/+1.*/
        for(kolumns=1;kolumns<=rader;kolumns++)
        /*Printar ut integern n * kolumns.*/
            printf("%d ", n*kolumns);

    printf("\n");

    }


    return 0;
}
