#include <stdio.h>
#include <stdlib.h>

/*
 * problem: take the arg $1 and arg 2
 * return arg1^arg2
 *
 */
int main (int argc, char **argv) {
  int base = atoi(argv[1]);
  int exponent = atoi(argv[2]);
  int result = 1;

  while (exponent != 0) {
    result *= base;
    --exponent;
  }
  
  printf("result is %d", result);
}
