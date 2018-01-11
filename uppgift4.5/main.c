#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int ar;
    int i=2016;

    printf("Skriv år.\n");
    scanf("%d", &ar);

    double invanare=26000;

    for(i=2016;i<=ar;i++);{

        invanare+=300-325+invanare*(0.7-0.6)/100+0.5;
  printf("Beräknad befolkning %d:", invanare);

    }



    return 0;
}
