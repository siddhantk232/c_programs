#include <stdlib.h>
#include <stdio.h>

/*
 * problem: check if the arg $1 is even or odd
 *
 */
int main (int argc, char **argv) {
  int input = atoi(argv[0]);

  if (input % 2 == 0) 
    printf("number %d is even", input);
  else 
    printf("number %d is odd", input);

  exit(0);
}
