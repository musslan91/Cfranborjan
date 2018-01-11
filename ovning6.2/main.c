#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double nfak(int n){
   double i,r=1;

   //For-satsen utgår ifrån att 1*2=2, nästa steg 2*3=6, 6*4=
   for(i=2;i<=n;i++)
   r=r*i;
   return r;
   }
   //Exempel om n=5 ((((1*2)*3)*4)*5)=120

int main()
{
   int tal;

   //Ber om ett positivt heltal.
   printf("Skriv ett positivt heltal\n");
   scanf("%d",&tal);

   //Anroppar funktionen och skriver ut resultatet med typen double.
   printf("%.2f",nfak(tal));
   return 0;
}

