#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ipow(int bas, int exponent) {
   if(exponent <= 0) return 1;
   return bas*ipow(bas, exponent-1);
}

int ipow_iter(int bas, int exponent) {
   int product = 1;
   while(exponent > 0) {
      product = product * bas;
      exponent--;
   }
   return product;
}

int conv_digit(char ch) {
   if('0'<=ch && ch <='9')
     return ch-48;
   if('A'<=ch && ch <='F')
     return ch-55;
   return ch;
}

int convert_to_decimal(char *siffror, int bas) {
   int ix, len = strlen(siffror)-1;
   int summa = 0;
   for(ix = 0; siffror[ix] != '\0'; ix++) {
     int factor = conv_digit(siffror[ix])*ipow_iter(bas,len-ix);
     summa += factor;
     printf("%d: '%c' = %d (%d)\n", len-ix, siffror[ix],
            conv_digit(siffror[ix]), factor);
   }
   return summa;
}

int main(int argc, char *argv[]) {
   int tal, bas;
   /* Fixa här: se till att antalet argument har angivits rätt */
   /*
   bas = atoi(argv[2]);
   tal = convert_to_decimal(argv[1], bas);
   */
   bas = 16;
   tal = convert_to_decimal("A2C4", bas);
   printf("%s (bas %d) = %d\n", "A2C4", bas, tal);
   return 0;
}
