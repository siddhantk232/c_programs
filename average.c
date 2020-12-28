#include <stdio.h>
#include <stdlib.h>

/*
 * problem: find the average of numbers provided by the user
 * store the input in an array
 *
 */

int main(int argc, char **argv) {

  int inputs[20] = {};
  int inputCount = 0;

  // take input
  do {

    int input;
    char consent;
    printf("enter the number\t");
    scanf("%d", &input);
    printf("\n");

    inputs[inputCount] = input;

    // flushes the standard input 
    // (clears the input buffer) 
    while ((getchar()) != '\n');

    printf("want to enter more. (y/n)\t");
    consent = getchar();

    if (consent == 'y' || consent == 'Y') {
      inputCount++;
      continue;
    } else break;
    
  } while(1);

  int total = 0;

  for (int i = 0; i <= inputCount; i++) {
    total += inputs[i];
  }

  printf("average is %d", total / (inputCount + 1));

  exit(0);
}


