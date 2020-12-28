#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * problem: write a program that takes radius of circle as param 1 
 * and returns the area of the circle
 * ignore floats and doubles by using int
 *
 */

int main (int argc, char **argv) {
  // argc is argument count
  // < 1 means no argument was provided
  // exit in this case
  if (argc < 1) {
    printf("invalid number of args");
    exit(1);
  }

  // conver first argument to the program to integer using stdlib.atoi()
  int radius = atoi(argv[1]);
  // M_PI is from math.h
  // can also define 
  // #define M_PI 3.14
  int area = M_PI * radius * radius;

  printf("area of circle is %d", area);

  exit(0);
}
