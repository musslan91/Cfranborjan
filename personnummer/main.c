#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{

    long long int personnummer, kille = 0, tjej = 1;

    printf("Skriv personnummer\n");
    scanf("%lld\n", &personnummer);


    personnummer = personnummer / 10;

    if(personnummer %2 == kille || personnummer %2 == tjej)
    printf("Det st�mmer");

        else
            printf("Det st�mmer inte.");

    return 0;

}
