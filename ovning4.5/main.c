#include <stdio.h>
#include <stdlib.h>

int main()
{
        /*Min variabler integers heltal.*/
        int n,k,summa = 0;
        /*Vad �r n? newline*/
       printf("n?\n");
    /*Pekar och scannar in adressen till variabeln n.*/
   scanf("%d", &n);
    /*Ett nytt program i min main. En "for" sats/loop som har i b�rjan en initiering/definering av
    variabel och sedan ett villkor och sen en f�r�ndring. S� ser for satser ut. Initiering;Villkor;�ndring;*/
   for(k=1; k<=n; k=k+1){
    /*Sedan i loopen l�gger vi in en definering av summa. F�rst var summa lika med 0 men sen i loopen l�gger man in
    f�r�ndringen p� summa och plussar p� den med 1 i varje varv.*/
        summa = summa + k;

   }
    /*Printf visar att "skriv ut variabeln h�r" och %3d p� integers betyder 3 spaces/mellanslag och sedan
    %d menas med att det �r en integer man ska skriva ut.*/
   printf("Summan blir %3d\n", summa);
   return 0;







}
