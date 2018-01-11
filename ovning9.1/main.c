#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c1='$';
    char c2='£';

    printf("%c%c", c1, c2);

    //Ansi är standarden i denna kompilator och har bara 127 tecken och inte unicod som har 256+ tecken.
    return 0;
}
