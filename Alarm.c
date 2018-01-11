#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
	/*Skriver så man kan använda svenska alfabetet*/
	setlocale(LC_ALL,"sv_SE");
	
	
	/* Printar ut hallå i kommandoraden.*/
	printf("Hallå\n");
	
	/* Printar ut jag larmar med larmljud i kommandoraden*/
	printf("Jag larmar\a");

	return 0;

}