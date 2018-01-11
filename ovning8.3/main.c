
#include <stdio.h>
#include <stdlib.h>
#define tal 10

int main()
{

    double a[tal];
    for(int i=0;i<tal;i++)

    a[i] = 1.0/(tal-i);//Ändra till minus istället för tal-i för att få ut det baklänges
    int i=0;
    for (i=0;i<tal;i++)
    printf("%10f\n",a[i]);

    return 0;
}

