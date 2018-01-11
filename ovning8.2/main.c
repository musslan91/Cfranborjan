#include <stdio.h>
#include <stdlib.h>
#define tal 10

int main()
{

    double a[tal];
    int i=0;
    for(i=0;i<tal;i++){
        a[i]=1.0/(i+1);
    }
    for(i=0;i<tal;i++){
        printf("%10f\n", a[i]);
    }
    return 0;
}
