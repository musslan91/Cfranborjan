#include <stdio.h>
#include <stdlib.h>
#include "ovning7.1.h"

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
