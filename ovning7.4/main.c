#include <stdio.h>
#include <stdlib.h>
/*Synlighetsomr�de �r det omr�de som man kan se en variabeldefinition.
Om man vill ha samma namn f�r variabler �r det okej men d� m�ste de vara
i olika synlighetsomr�den. Som tex mellan m�svingar. Det finns �ven limousineprincipen
d�r ifr�n en inre punkt i koden kunna titta ut, men fr�n yttre inte g�r att titta in genom de tonade rutorna.*/

Om ordet static stryks kommer raden
int a = 7;
att uppfattas som en definition av en extern variabel.
Men eftersom det redan finns en definition av en extern variabel med samma namn
i filen main.c kommer man att f� en felutskrift fr�n l�nkaren som s�ger att det
finns en multipel definition av 'a'.
