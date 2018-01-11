#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int convert_to_binary(long int number){

    int Rest;
    long int Binary = 0, i = 1;

    while(number!=0){
        Rest = number%2; //Checks if there's any leftovers
        number = number/2;
        Binary = Binary + (Rest*i);
        i = i*10;
    }
    return Binary;
}

int main(){

    //Ask for a number and saves it.
    long int Number;
    printf("Type a number with no decimals you wish to convert to binary\n");
    scanf("%ld",&Number);

    //Calls on function that will convert number to binary
    long int binary;
    binary = convert_to_binary(Number);

    //Prints out binary result
    printf("%d in binary is: %ld\n",Number,binary);

    return 0;
}

