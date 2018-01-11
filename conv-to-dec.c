#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INT int64_t

INT ipow(INT bas, INT exponent) {
   if(exponent <= 0) return 1;
   return bas*ipow(bas, exponent-1);
}

INT ipow_iter(INT bas, INT exponent) {
   INT product = 1;
   while(exponent > 0) {
      product = product * bas;
      exponent--;
   }
   return product;
}

INT conv_digit(char ch) {
   if('0'<=ch && ch <='9')
     return ch-48;
   if('A'<=ch && ch <='Z')
     return ch-55;
   if('a'<=ch && ch <='z')
     return ch-55;
   return ch;
}

INT convert_to_decimal(char *siffror, INT bas) {
   INT ix, len = strlen(siffror)-1;
   INT summa = 0;
   for(ix = 0; siffror[ix] != '\0'; ix++) {
     INT factor = conv_digit(siffror[ix])*ipow_iter(bas,len-ix);
     summa += factor;
     printf("%d: '%c' = %d (%d)\n", len-ix, siffror[ix],
            conv_digit(siffror[ix]), factor);
   }
   return summa;
}

INT main(INT argc, char *argv[]) {
   INT tal, bas;
   printf("sizeof(INT) = %d\n", sizeof(INT));
   printf("sizeof(INT) = %d\n", sizeof(INT));
   bas = 36;
   tal = convert_to_decimal("LUNCHDAGS", bas);
   printf("%s (bas %d) = %d\n", "LUNCHDAGS", bas, tal);
   return 0;
}
