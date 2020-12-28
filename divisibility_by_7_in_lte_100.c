#include <stdlib.h>
#include <stdio.h>

/*
 * problem: check if the arg $1 is divisible by 7
 * do not proceed if the range is not in range 1-100 inclusive.
 *
 */
int main (int argc, char **argv) {

  int input = atoi(argv[0]);

  for (int i = 1; i <= 100; i++) {
      if (input % 7 == 0) {
        printf("input %d is divisible by 7", input);
        break;
      }
  }

  exit(0);
}
