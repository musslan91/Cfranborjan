#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Två integer/heltal C för celsius och F för farenheit.*/
    int C, F;
    /*Skriv temperatur på skärmen och sedan peka på variabel adressen F-farenheit.*/
    printf("Skriv temperatur\n");
    scanf("%d", &F);
    /*Definera C-Celsius i ekvationen.*/
    C=((F-32)*5)/9;
    /*Skriver ut temperaturen i celsius %d, C.*/
    printf("Temperaturen fran farenheit till celsius blir %d\n", C);



    return 0;
}
