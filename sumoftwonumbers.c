
	/* summ of two numbers */


#include<stdio.h> /* for printf() & Scanf()*/
#include<conio.h> /* clrscr() & getch()*/



int main () // starting point of the program execution

{

int a,b,sum; // variable declareations
clrscr();    // clear screen
printf("enter two numbers"); // request for input
scanf("%d %d",&a,&b);  // input from user


sum=a+b; // Adding two numbers
printf("sum=%d",sum);  //Output sum

getch(); // to hold output screen
 // end of main
}
