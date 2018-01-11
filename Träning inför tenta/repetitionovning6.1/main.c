#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funktioner.h"
#define PI 3.14

int main()
{
    /*Main programmet som kallar på funktionerna över och returnerar dess beräkningar.*/
    double radietal;

	printf("Skriv ett tal, cirkelns radie\n");
	scanf("%lf", &radietal);

    /*Skriver ut på skärmen omkretsen på omkr radietal med samma namn på funktionen som i main.*/
	printf("omkretsen i cirkeln %.2f\n", omkr(radietal));
    /*Sedan kallar vi en funktion area som är i andra funktionen.*/
	printf("arean i cirkeln: %.2f\n", area(radietal));

	return 0;


}
