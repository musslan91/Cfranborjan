#include <stdio.h>
#include <stdlib.h>
#include "kolapp.h"

    static int sist=0;
    static int betjanad=0;

    int ta_lapp(void){
    return ++sist;
    }
int betjana_kund(void){
    if(betjanad==sist)
        return -1;
    else
    return ++betjanad;

}

    int init(void){
        sist=0;
        betjanad=0;
        return;
}

    int betjanas(void){
    printf("Nu betjänas nr: %d\n", betjanad);
    }
