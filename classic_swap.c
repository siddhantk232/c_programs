#include <stdio.h>
#include <stdlib.h>

/*
 * problem: input two numbers in a and b int type variables.
 * swap the values stored in a and b
 */
int main (int argc, char **argv) {
  int a,b;

  printf("enter two numbers (space separated) ");
  scanf("%d %d", &a, &b);

  printf("before swap\t%d %d\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("after swap\t%d %d", a, b);
  exit(0);
}
