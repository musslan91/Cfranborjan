#include <stdio.h>
#include "funktionsbibliotek.h"
/*Funktionerna som jag kommer att kalla till main programmet och uträkningar för funktionerna.*/
double area_rektangel(double bredd, double langd){

    double arearek=bredd*langd;//Rektangels area är lika med bredden gånger längden.
    return arearek;//Returnera beräkningen.
}

double area_cirkel(double radie){

    double areacirk=3.14*radie*radie;//Cirkelns area är lika med PI gånger radie gånger radie.

    return areacirk;//Returnera beräkningen.
}

double area_triangel(double bas, double hojd){

    double areatri=(bas*hojd)/2;//Triangels area är lika med basen gånger höjden delat på två.

    return areatri;//Returnera beräkningen.
}
