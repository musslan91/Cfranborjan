#include <stdio.h>
#include "kristofer.h"
int x;
int ga() {
	scanf("%d", &x);
	if (x != 1 && x != 2) {
		printf("Det alternativ [%d] finns ej!\nV�lj [1] eller [2]\n", x);
		ga();
	}
}

int main() {

	while (1) {
		printf("Det �r lunchtid och du �r i skolan");
		
		ga();
		if (x == 1) {
			printf("Alternativ1");
		} else {
			printf("Alternativ2");
		}
		
	}
}