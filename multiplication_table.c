#include <stdio.h>

/*
 * problem: print table of the given number
 * take number from stdin
 *
 */
int main () {

  int input;

  printf("enter number: ");
  scanf("%d", &input);

  for (int i = 1; i <= 10; i++) {
    printf("%dx%d\t= %d\n", input, i, input * i);
  }

}
