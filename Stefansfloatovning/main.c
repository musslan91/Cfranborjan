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
   L�gg till (( Float p� price/sale/dayworked f�r att f� den att tillf�lligt
   g�ra om int till en float, men anv�nder man den ist�llet s� kommer den r�kna fel d� den inte kommer r�kna decimalerna.

   Med float blir de 84,29 utan s� blir de 84.

   avrageprofit = price * sale) / dayworked;
   printf("Avrage dayily profit: $%.2f", avrageprofit);
*/

   avrageprofit = ((float)price*(float)sale) / (float)dayworked;
   printf("Avrage dayily profit: $%.2f", avrageprofit);

   return 0;

}
