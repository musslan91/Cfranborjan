#include <stdio.h>
#include <stdlib.h>

int main()
{
        /*Min variabler integers heltal.*/
        int n,k,summa = 0;
        /*Vad är n? newline*/
       printf("n?\n");
    /*Pekar och scannar in adressen till variabeln n.*/
   scanf("%d", &n);
    /*Ett nytt program i min main. En "for" sats/loop som har i början en initiering/definering av
    variabel och sedan ett villkor och sen en förändring. Så ser for satser ut. Initiering;Villkor;ändring;*/
   for(k=1; k<=n; k=k+1){
    /*Sedan i loopen lägger vi in en definering av summa. Först var summa lika med 0 men sen i loopen lägger man in
    förändringen på summa och plussar på den med 1 i varje varv.*/
        summa = summa + k;

   }
    /*Printf visar att "skriv ut variabeln här" och %3d på integers betyder 3 spaces/mellanslag och sedan
    %d menas med att det är en integer man ska skriva ut.*/
   printf("Summan blir %3d\n", summa);
   return 0;







}
