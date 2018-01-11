#include <stdio.h>
#include <stdlib.h>


int main ()

{
	/* Talar om i kommandoraden vad cls, dir och cd har för funktioner*/
	printf("cls=Clear screen, du tommer kommandoraden\n");
	printf("dir=directory, visar alla kataloger i det direktiv du sitter i\n");
	printf("cd=Change directory, byt katalog\n");
/* En pause innan man utför ett clear screen kommando. */
	system("pause\n");

	system("Cls\n");
/* En pause innan man utför ett lista nuvarande direktiv man sitter i just nu.*/
	system("pause\n");
/* Utför direktiv kommando i kommandoraden.*/
	system("dir\n");
	/* En funktion jag försökte få att fungera men inte lyckats, skickar ändå in
	uppgiften. Men tanken var att få en funktion som bytte katalog till C huvuddisken
	och utgå från den. Tanken var system("cd cd:\\"), men fungerar ej.*/
	system("cd\n");
	/* Pause innan man uför set i kommandoraden.*/
	system("pause\n");
	/* Utför set kommandot i kommandoraden.*/
	system("set\n");

	return 0;

}