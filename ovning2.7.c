#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	
	int langd;
	int bredd;
	int omkr;
	int area;
	
	
	/* skriver ut längden*/
	printf("skriv 1 tal för att för rektangelns längd.\n");
	scanf("%d", &langd);
	
	printf("skriv ett tal för rektangels bredd\n");
	scanf("%d", &bredd);
	/*Definerar på hur han ska räkna ut omkrets och sedan dess area*/
	omkr = langd+langd+bredd+bredd;
	area = langd*bredd;
	
	/*Pekar på omkrets definerade och räknar ut.*/
	printf("omkretsen är %d\n", omkr);
	
	/* pekar på arean som är definierad och räknar ut.*/
	printf("arean är %d\n", area);
	
	system("pause");
	
	
	return 0;
	

}