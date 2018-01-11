#include <stdio.h>
#include <stdlib.h>
/*Min funktion ele_ments med två parametrar. En pekare på array och en variabel size.
Sedan räknaren i får inte vara större än size som får inskickat 5 från main och min array elements skickas in
till pekaren *array som ökar med i ända upp till 5.*/
void ele_ments(int *array, int size){

    for(int i=0;i<size;i++)
        printf("%d ", array[i]);

}

int main()
{
    //Array med 5 st element som är indexerade 25-65.
    int elements[5]={25,35,45,55,65};
    /*Kallar på funktionen ele_ments och skickar in min array och en 5:a för hur många elements mitt fält har.*/
    ele_ments(elements, 5);

    return 0;
}
