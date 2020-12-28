#include <stdio.h>
#include <stdlib.h>

/*
 * problem: count the number of vowels in a text file
 *
 */
int main (int argc, char **argv) {
  FILE *fp;
  char ch;
  int nov = 0;

  fp = fopen("sample.text", "r");

  while (1) {
    ch = fgetc(fp);
    if (
        ch == 'a' ||
        ch == 'e' ||
        ch == 'i' ||
        ch == 'o' ||
        ch == 'u'
        ) {
      nov ++;
    }
    if (ch == EOF) break;
  }

  printf("no. of vowels %d", nov);
  exit(0);
}
