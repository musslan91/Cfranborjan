#include <stdio.h>
#include <stdlib.h>
#include <math.h>


   //Exempel om n=5 ((((1*2)*3)*4)*5)=120

int main()
{
   int tal;

   //Ber om ett positivt heltal.
   printf("Skriv ett positivt heltal\n");
   scanf("%d",&tal);

   //Anroppar funktionen och skriver ut resultatet med typen double.
   printf("%.2f",nfak());
   return 0;
}

