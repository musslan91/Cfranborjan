#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
   float avrageprofit;
   int price=10;
   int sale=59;
   int dayworked=7;

/*
   Lägg till (( Float på price/sale/dayworked för att få den att tillfälligt
   göra om int till en float, men använder man den istället så kommer den räkna fel då den inte kommer räkna decimalerna.

   Med float blir de 84,29 utan så blir de 84.

   avrageprofit = price * sale) / dayworked;
   printf("Avrage dayily profit: $%.2f", avrageprofit);
*/

   avrageprofit = ((float)price*(float)sale) / (float)dayworked;
   printf("Avrage dayily profit: $%.2f", avrageprofit);

   return 0;

}
