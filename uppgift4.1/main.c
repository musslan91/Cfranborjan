#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    /*INT_MIN och INT_MAX definerade i include limits.h header biblioteket.*/
    int tal;
    int min=INT_MAX;
    int max=INT_MIN;

   while(1){// While 1 s�ger att den bara ska g� ett varv och sedan m�svingar f�r nytt program.
    printf("Ange n, markera EOF f�r sluta?\n");
        if(scanf("%d",&tal)!=1){
                /*Ett nytt program som skriver ut str�ngen max och min p� sk�rmen med %d f�r integer
                med en tab \t och newline \n*/
                printf("resultatet ar %d\t%d\n",max,min);
                break;
        }
        /*Om tal �r st�rre �n max, d� �r max loka med talet.*/
        if(tal>max){
            max=tal;
        }
        /*Annars om min �r st�rre �n tal. D� �r min lika med tal.*/
        else if(tal<min){
            min=tal;
        }
   }

return 0;

}

