#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Tv� integer/heltal C f�r celsius och F f�r farenheit.*/
    int C, F;
    /*Skriv temperatur p� sk�rmen och sedan peka p� variabel adressen F-farenheit.*/
    printf("Skriv temperatur\n");
    scanf("%d", &F);
    /*Definera C-Celsius i ekvationen.*/
    C=((F-32)*5)/9;
    /*Skriver ut temperaturen i celsius %d, C.*/
    printf("Temperaturen fran farenheit till celsius blir %d\n", C);



    return 0;
}
