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
char rak[256];

char *convert_to_binary(int decimal) {
   int oix, t;
   oix = 0;
   for(t = decimal; t != 0 && t != '.'; t = t / 2) {
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

char get_digit(int digit) {
   if(0 <= digit && digit <= 9) return '0'+digit;
   if(10 <= digit && digit <= 36) return 'A'+digit-10;
   else return '*';
}

char *convert_to_base(int decimal, int base) { // A)
    /* Tar angivna basen och kollar ifall den är korrekt.*/

    char bas_siffra[16]={'0','1','2','3','4','5','6','7','8','9'
                        ,'A','B','C','D','E','F'};//Char Array med 16 element som är deklarerade.
    int t, index = 0;

    for(t = decimal; t != 0 && '.'; t = t / base)//For sats med initiering, villkor och förändringen.
    {
        int temp = t % base;//I loopen en variabel vid namn temp med typen integer. och är lika med rest av basen.
        omvand[index] = bas_siffra[temp];//Omvänd array med index börjar räkna från 0 med villkoren för bas_siffra char arrayen.
        index++;//Öka index i min for - loop.
    }
        omvand[index] = '\0';//Stoppa min array.
        reverse(omvand);// Reversa din funktion du har ovan.
        return omvand;

}
/*A rule for finding the right value of x could be this: Start with an exponent of 0.
If x is larger than 1, divide it by the base and add one to the exponent.
If x is less than 1/base, multiply it by the base and subtract one from the exponent.
Repeat this until x is between 1/base and 1 (including 1/base but excluding 1, so stop if x equals 1/base).

For 12.25 and decimal: Start with exponent 0. Divide 12.25 by 10 (getting 1.225) and increment the exponent to 1.
 Divide again (.1225) and increment the exponent to 2. Now we stop because .1225 is between 1/10 and 1.

For 12.25 and base 16: Start with exponent 0. Divide 12.25 by 16 (getting .765625) and increment the exponent to 1.
 Now stop because .765625 is between 1/16 and 1.

To convert .765625 to base 16: Multiply .765625 by 16 to get integer 12 (digit C) and fraction .25. Multiply .25 by 16 to get
integer 4 and fraction 0. The fraction is 0, so stop. The base-16 numeral is .C4, so the whole form is 1×.C4×21.*/

/*Så som förklarat kan man göra för att lösa problemet men kunde inte komma längre än såhär och det är fel.
och vill du köra koden med den lösta A uppgiften så kommentera bort convert_to_base_frac funktionen.*/

char *convert_to_base_frac(float dec_frac, int max_digits, int base) { // B)

    float x = dec_frac;
    if(x > 1)
    {
        x = x / base;
            x++;
            if(x < 1 / base)
                x * base -1;
                if(x = 1 / base)
                    break;
    }


    reverse(omvänd);
    return omvand;
}

#include "tester.h"

int main(void) {
   int decimal = 826;
   char *binstr;
   binary_tests();
   octal_tests();
   hexadecimal_tests();
   binary_fraction_tests();
   hexadecimal_fraction_tests();
   char *str1 = strdup(convert_to_base(3, 2));
   char *str2 = strdup(convert_to_base_frac(.141592654, 20, 2));
   printf("PI = %s%s(2)\n", str1, str2);
   char *str3 = strdup(convert_to_base(3, 16));
   char *str4 = strdup(convert_to_base_frac(.141592654, 20, 16));
   printf("PI = %s%s(16)\n", str3, str4);
}
