#include <stdio.h>
#include <stdlib.h>

static double noll=0;
static double ett=1;

int pop_kaniner(void){

    static double noll=0;
    static double ett=1;
    double int c=noll+ett;
    noll=ett;ett=c;
    return c;
}
/*
long int fibonacci(void) {
  static long int a = 0, b = 1;
  long int c = a + b;
  a = b; b = c;
  return c;
