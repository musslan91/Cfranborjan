#include "funktioner.h"
//Definition av funktionen med dess kropp.
double nfak(double n){
   double i,r=1;

   //For-satsen utg�r ifr�n att 1*2=2, n�sta steg 2*3=6, 6*4=
   for(i=2;i<=n;i++)
   r=r*i;
   return r;
   }
