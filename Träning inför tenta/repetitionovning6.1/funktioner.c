#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funktioner.h"
#define PI 3.14
    /*Variabler omkrets/omkr och och area båda doubles. i två funktioner.*/

    //Definitioner av mina funktioner som man kallar i main där ser man hela kroppen.
    double omkr(double radietal){
        /**Returnerar beräkningen.*/
        return 2*PI*radietal;
    }

    double area(double radietal){
            /*Returnerar beräkningen.*/
            return PI*radietal*radietal;
    }

