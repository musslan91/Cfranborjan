#include <stdio.h>
#include <stdlib.h>

 void peka_ren(int *x, int *y)
{
    int ny= *x;
    y=*x;

    printf("%d %d", x, y);

}

int main()
{

    int x=14, y=15;

    int *pk1=&x;
    int *pk2=&y;

    peka_ren(pk1,pk2);

    return 0;
}
