#include <stdio.h>
#include "funktionsbibliotek.h"
/*Funktionerna som jag kommer att kalla till main programmet och utr�kningar f�r funktionerna.*/
double area_rektangel(double bredd, double langd){

    double arearek=bredd*langd;//Rektangels area �r lika med bredden g�nger l�ngden.
    return arearek;//Returnera ber�kningen.
}

double area_cirkel(double radie){

    double areacirk=3.14*radie*radie;//Cirkelns area �r lika med PI g�nger radie g�nger radie.

    return areacirk;//Returnera ber�kningen.
}

double area_triangel(double bas, double hojd){

    double areatri=(bas*hojd)/2;//Triangels area �r lika med basen g�nger h�jden delat p� tv�.

    return areatri;//Returnera ber�kningen.
}
