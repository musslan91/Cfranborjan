#include <stdio.h>
#include <stdlib.h>

int conv_digit(char ch){

    if('0' <= ch && ch <= '9')
        return ch-48;
    return ch;

}

int convert_to_decimal( char *siffror, int bas){

    int ix;
    for(ix = 0; siffror[ix] != '\0'; ix++){

        printf("'%c' = %d\n", siffror[ix], siffror[ix]);
    }

}

int main(int argc, char *argv[])
{
    int tal, bas;
    /*Fixa här: se till att antalet argument har angivits rätt.*/
    bas = atoi(argv[2]);
    tal = convert_to_decimal(argv[1], bas);
    printf("%s (bas %d)= %d\n", argv[1], bas, tal);


    return 0;
}