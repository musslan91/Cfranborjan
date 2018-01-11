#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Float variabel som jobbar med heltal och decimaler.*/
   float x,summa;

   /*For sats/loop med initiering;villkor;förändring; ett program i man programmet.*/
   for(x=-1;x<=1;x=x+0.1){
    /*Definerar summa i denna ekvation.*/
   summa = (2*(x*x))-(5*x)+1;
   /*Skriver ut variabeln float variablerna x och summa med en decimal %.1f och %.1f.*/
   printf("%.1f\t %.1f\n",x,summa);
   }

   return 0;
}
