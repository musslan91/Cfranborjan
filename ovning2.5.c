#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

/* kan skriva med decimaler vilket int main inte kan göra det.*/
double main()
{
	
	double PI = 3.14;
	double r = 5;
	/* definerar omkretsen och arean.*/
	double omkr = 2 * PI * r;
	double area = PI * r * r;
	/* Skriver ut omkretsen och arean.*/
	printf("omkrets: %.3lf\n", 2 * PI * r);
	printf("area: %.3lf\n", PI * r * r);
	
	return 0;
	

	
}