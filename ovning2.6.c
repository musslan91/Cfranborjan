#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double main()
{
	
	double PI=3.14;
	double omkr;
	double area;
	double radietal;
	
	/* definerar vad som gör vad, ex PI har ett fast värde*/
	printf("Skriv ett tal, cirkelns radie\n");
	scanf("%lf", &radietal);
	
	/* definierar omkrets och area.*/
	omkr=2*PI*radietal;
	area=PI*radietal*radietal;
	
	
	/* Printar ut definierade omkretsen och arean.*/
	printf("omkretsen i cirkeln %.2lf\n", omkr);
	printf("arean i cirkeln: %.2lf\n", area);
	
	system("pause");
	
	return 0;
	

	
}