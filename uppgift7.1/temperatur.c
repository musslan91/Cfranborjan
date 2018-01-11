#include "temperatur.h"
static int t, m;
static double temperatur;


_Bool observerat(int tim, int min, double temp){
    if (tim < 0 || tim > 23 || min < 0 || min > 59) {
    printf("Felaktig tidpunkt\n");
    return 0;
  }
  if (temp < -100 || temp > 100) {
    printf("Felaktig temperatur\n");
    return 0;
  }
    t = tim;
    m = min;
    temperatur = temp;
    return 1;
}


double aktuell_temp(void){

 return temperatur;
}

int obs_tim(void){

    return t;
}

int obs_min(void){

    return m;
}
