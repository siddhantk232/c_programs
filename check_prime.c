#include <stdio.h>
#include <stdlib.h>

/*
 * problem: provided the number as arg $1
 * find if the number is prime or not
 * 1 is not a prime number.
 * any number divisible by only 1 and itself
 * is considered to be a prime.
 *
 */
int main (int argc, char **argv) {
  int isPrime = 0;

  if (argc < 1) {
    printf("invalid arguments");
    printf("atleast 1 arg expected");
    exit(1);
  }

  int number = atoi(argv[1]);

  if (number == 1) {
    printf("1 is neither prime nor composite");
    exit(0);
  } else {
    for (int i = 2; i <= number / 2; i++) {
      if (number % i == 0) {
        isPrime = 1;
        break;
      }
    }

    if (isPrime == 0) printf("%d is prime", number);
    else printf("%d is not prime", number);

    exit(0);
  }
}

