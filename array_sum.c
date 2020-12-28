#include <stdio.h>
#include <stdlib.h>

/*
 * problem: iterate through the array and find the sum of all the elements
 * use array of type int in this case
 *
 */

int main (int argc, char **argv) {
  int arr[7] = {1, 2, 3, 9, 8, 10, 5};
  int arrSize = sizeof arr / sizeof arr[0];
  int sum = 0;

  if (arrSize == 0) {
    printf("empty array");
    exit(1);
  }

  for (int i = 0; i <= arrSize - 1; i++) {
    sum += arr[i];
  }

  printf("sum of array is %d", sum);
}
