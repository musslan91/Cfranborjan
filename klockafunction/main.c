
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   void print_date(void){
   time_t t=time(NULL);
   puts(ctime(&t));
   }

int main()
{
   print_date();
   }

