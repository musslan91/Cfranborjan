#include <stdio.h>
#include <string.h>

void reverse(char *str) {
   int lix, uix = strlen(str)-1;
   for(lix = 0; lix < uix; lix++, uix--) {
      char temp;
      temp = str[uix];
      str[uix] = str[lix];
      str[lix] = temp;
   }
}

char omvand[256];

char *convert_to_binary(int decimal) {
   int oix, t;
   oix = 0;
   for(t = decimal; t != 0; t = t / 2) {
      if(t%2 == 1) {
         omvand[oix]='1';
      }
      else {
         omvand[oix]='0';
      }
      oix++;
   }
   omvand[oix]='\0';
   reverse(omvand);
   return omvand;
}

int main(void) {
   int decimal = 826;
   char *binstr;
   binstr = convert_to_binary(decimal);
   printf("%d₁₀ = %s₂\n", decimal, binstr);
   return 0;
}