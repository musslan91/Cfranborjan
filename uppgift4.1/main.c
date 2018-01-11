#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    /*INT_MIN och INT_MAX definerade i include limits.h header biblioteket.*/
    int tal;
    int min=INT_MAX;
    int max=INT_MIN;

   while(1){// While 1 säger att den bara ska gå ett varv och sedan måsvingar för nytt program.
    printf("Ange n, markera EOF för sluta?\n");
        if(scanf("%d",&tal)!=1){
                /*Ett nytt program som skriver ut strängen max och min på skärmen med %d för integer
                med en tab \t och newline \n*/
                printf("resultatet ar %d\t%d\n",max,min);
                break;
        }
        /*Om tal är större än max, då är max loka med talet.*/
        if(tal>max){
            max=tal;
        }
        /*Annars om min är större än tal. Då är min lika med tal.*/
        else if(tal<min){
            min=tal;
        }
   }

return 0;

}

