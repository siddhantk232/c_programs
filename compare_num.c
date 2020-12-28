#include <stdio.h>
#include <stdlib.h>

/*
 * problem: take unlimited number of inputs from argv
 * compare and print the highest number from the argv.
 *
 */
int main (int argc, char **argv) {
  int result = 0;

  if (argc < 1) {
    printf("invalid argument");
    printf("atleas 1 arg required");
    exit(1);
  }

  for (int i = 0; i <= argc -1 ; i++) {
    int num = atoi(argv[i]);
    if (num > result) {
      result = num;
    }
  }

  printf("highest number is %d", result);
  exit(0);
}
