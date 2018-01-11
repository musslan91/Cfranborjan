#include <stdio.h>
#include <stdlib.h>
/*Synlighetsområde är det område som man kan se en variabeldefinition.
Om man vill ha samma namn för variabler är det okej men då måste de vara
i olika synlighetsområden. Som tex mellan måsvingar. Det finns även limousineprincipen
där ifrån en inre punkt i koden kunna titta ut, men från yttre inte går att titta in genom de tonade rutorna.*/

Om ordet static stryks kommer raden
int a = 7;
att uppfattas som en definition av en extern variabel.
Men eftersom det redan finns en definition av en extern variabel med samma namn
i filen main.c kommer man att få en felutskrift från länkaren som säger att det
finns en multipel definition av 'a'.
