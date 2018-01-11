

/*
void tex_ten(char text[])
{
    printf("%s", text);

}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

	system("chcp 1252\n");

	FILE* utfil = fopen("hest.txt", "w");

    char text[100];

    printf("Skriv in en text: ");
    fgets(text, 100, stdin);
    fputs(text, utfil);

    char filnamn[50];
    printf("Skriv in namnet på infilen: ");
    scanf("%s", filnamn);

    FILE* infil = fopen(filnamn, "r");
    if( infil == NULL ){
        printf("Hittar inte filen.");
        exit(1);
    }

    while( fgets(text, 100, infil) != NULL ){
        printf("%s", text);
    }
    printf("\n");

    fclose(utfil);
    fclose(infil);
	system("pause");
	return 0;
}

    /*scanf("%39[0-9a-zA-Z ]", text) Kan man göra då det är säkrare än vad gets operatorn/funktionerna.*/
