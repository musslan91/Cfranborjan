#include <stdio.h>
#include <stdlib.h>
/*Min funktion ele_ments med tv� parametrar. En pekare p� array och en variabel size.
Sedan r�knaren i f�r inte vara st�rre �n size som f�r inskickat 5 fr�n main och min array elements skickas in
till pekaren *array som �kar med i �nda upp till 5.*/
void ele_ments(int *array, int size){

    for(int i=0;i<size;i++)
        printf("%d ", array[i]);

}

int main()
{
    //Array med 5 st element som �r indexerade 25-65.
    int elements[5]={25,35,45,55,65};
    /*Kallar p� funktionen ele_ments och skickar in min array och en 5:a f�r hur m�nga elements mitt f�lt har.*/
    ele_ments(elements, 5);

    return 0;
}
