#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funktioner.h"
#define PI 3.14
    /*Variabler omkrets/omkr och och area b�da doubles. i tv� funktioner.*/

    //Definitioner av mina funktioner som man kallar i main d�r ser man hela kroppen.
    double omkr(double radietal){
        /**Returnerar ber�kningen.*/
        return 2*PI*radietal;
    }

    double area(double radietal){
            /*Returnerar ber�kningen.*/
            return PI*radietal*radietal;
    }

