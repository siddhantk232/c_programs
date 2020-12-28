#include <stdio.h>
#include <stdlib.h>

/*
 * problem: write a program that takes sides of a rectangle as param 1 and 2
 * and returns the area of the rectangle
 * ignore floats and doubles by using int
 *
 */

// $ area_rectangle <length> <breadth>
int main (int argc, char **argv) {
  // argc is argument count
  // < 1 means no argument was provided
  // exit in this case
  if (argc < 2) {
    printf("invalid number of args\n");
    printf("2 args required");
    exit(1);
  }

  // conver first argument to the program to integer using stdlib.atoi()
  int length = atoi(argv[1]);
  int breadth = atoi(argv[2]);
  int area = length * breadth;

  printf("area of rectangle is %d", area);

  exit(0);
}
