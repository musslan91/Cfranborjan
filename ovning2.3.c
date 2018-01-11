#include <stdio.h>
#include <stdlib.h>

int main()

{
	
	/* Visar och skriver ut antalet bitar i char.*/
	int antal_bytes1 = sizeof(char);
	printf("%d\n", &antal_bytes1);
	
	/* En pause efter första utskrivningen av char i bitar.*/
	system("pause");
	
	/* Visar och skriver ut antalet bitar i char.*/
	int antal_bytes2= sizeof(short int);
	printf("%d\n", &antal_bytes2);
	
	/* En pause efter andra utskrivningen av short i bitar.*/
	system("pause");
	
	/* Visar och skriver ut antalet bitar i int.*/
	int antal_bytes3 = sizeof(int);
	printf("%d\n", "&antal_bytes3);
	
	/* En pause efter utskrivningen av int i bitar.*/
	system("pause");
	
	/* Visar och skriver ut antal bitar i long int.*/
	int antal_bytes4 = sizeof(long int);
	printf("%d\n", &antal_bytes4);
	
	/* En pause efter utskrivningen av long int i bitas.*/
	system("pause");
	
	/* Visar och skriver ut antalet bitar.*/
	int antal_bytes5 = sizeof(long long int);
	printf("%d\n", &antal_bytes5);
	
	int antal_bytes6 = sizeof(float);
	printf("d%\n", &antal_bytes6);
	
	system("pause")
	
	int antal_bytes7 = sizeof(double);
	printf("d%\n", &antal_bytes7);
	
	system("pause");
	
	int antal_bytes8 = sizeof(long double);
	printf("d%\n", &antal_bytes8);
	
	return 0;
	
	
}