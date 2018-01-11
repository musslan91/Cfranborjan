#include <stdio.h>
#include <stdlib.h>

int main{
	int a = 1;
	
	int *b = a;
	b = a;
	*b =a;
	
	 printf("%d\n", b);

}

/*{

	int a[10];
	int *b = a;
	b = &b[3];

}
*=