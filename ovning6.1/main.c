#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

    /*Variabler omkrets/omkr och och area b�da doubles. i tv� funktioner.*/

    double omkr(double radietal){
        /**Returnerar ber�kningen.*/
        return 2*PI*radietal;
    }

    double area(double radietal){
            /*Returnerar ber�kningen.*/
            return PI*radietal*radietal;
    }

int main()
{
    /*Main programmet som kallar p� funktionerna �ver och returnerar dess ber�kningar.*/
    double radietal;

	printf("Skriv ett tal, cirkelns radie\n");
	scanf("%lf", &radietal);

    /*Skriver ut p� sk�rmen omkretsen p� omkr radietal med samma namn p� funktionen som i main.*/
	printf("omkretsen i cirkeln %.2f\n", omkr(radietal));
    /*Sedan kallar vi en funktion area som �r i andra funktionen.*/
	printf("arean i cirkeln: %.2f\n", area(radietal));

	return 0;


}
