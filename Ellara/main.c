#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int x;
   double Rsum;
   for(x = 0; x < 400; x++){
        /*Beräkna summaresistans*/
        Rsum = 1./(1./x+1./(400.-x));
        /*Skriv ut det*/
        printf("(%d) -> (%f)\n", x, 1./x, Rsum);

   }

    return 0;


}
