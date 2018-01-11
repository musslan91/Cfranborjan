#include "funktioner.h"
//Definition av funktionen med dess kropp.
double nfak(double n){
   double i,r=1;

   //For-satsen utgår ifrån att 1*2=2, nästa steg 2*3=6, 6*4=
   for(i=2;i<=n;i++)
   r=r*i;
   return r;
   }
