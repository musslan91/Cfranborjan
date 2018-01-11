#include <stdio.h>
#include <stdlib.h>
#include "headerarray.h"

double medel(double a[]) {
    double summa;
    for(int i=0;i<10;i++){
        summa= summa + a[i];
    }
    return summa/10;
}

    double median(double b[]){
    double summa;
        for(int i=0;i<10;i++){
            summa=summa + b[i];
        }
        return summa/2;
    }

int main()
{
    double is15[10]={22,31,42,44,44,45,46,47,48,49};
    double is16[10]={23,31,32,36,37,39,41,43,45,48};

    double medel15 = medel(is15);
    double medel16 = medel(is16);

    double median15=median(is15);
    double median16=median(is16);

//    double median15 = median(is15);
    double totres[2][2];
    totres[0][0] = medel15;
    totres[0][1] = medel16;

    totres[2][0]=median15;
    totres[2][1]=median16;


    //totres[1][0] = median15;
    printf("is15\t%f\tis16\t%fis15\t%f\tis16\t%f\t", totres[0][0], totres[0][1], totres[2][0], totres[2][1]);

  return 0;
}

