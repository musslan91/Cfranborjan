#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Double v[0] begr�nsar inte hur m�nga siffror som kan skrivas in.
    D�remot v[5], kan bara skrivas ut som [0,0,0,0,0] begr�nsas det att man bara kan skriva ut 5st utskrifter och inget annat.*/
    double v[]={0,0,0,0,0};//Deklarerar f�ltet.
    int antal=sizeof v/sizeof v[0];
    v[0]=1.5;//�ndra det f�rsta elementet.
    v[antal-1]=7.3;//�ndra det sista elementet.
    int i;

    /*�ndra det sista elementet// R�knar totala antalet som skrivs in ={0,0,0,0,0} allts� 5st
    sen ger den ett v�rde p� den som �r n�st sist v[antal-1] Skriver man -2 s� blir (1.5, 0.0 0.0 0.0 7.3)
    Den flyttas allts� in beroende p� vad man s�tter som v�rde p� - ex -1 -2 -3 -4*/
    for(i=0;i<antal;i++)
        printf("%.1f ", v[i]);
    return 0;
}
