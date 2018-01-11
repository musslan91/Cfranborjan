#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double main()
{
   //Definerar variabler
   int r1;
   double resultat;

   //Ber om mil
   printf("Skriv antal mil:");
   scanf("%d",&r1);


   resultat = 3.785/(r1*1.609/10);

   //Skriver ut resultat med metoden där ovan
   printf("Resultatet blir: %lf\n",resultat);

   system("pause");
   return 0;
}
