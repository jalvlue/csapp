#include <stdio.h>

void count_digit();
int is_white(int);

int main() { count_digit(); }

void count_digit() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; i++) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c - '0'];
    } else if (is_white(c)) {
      ++nwhite;
    } else {
      ++nother;
    }
  }

  printf("digits =");
  for (i = 0; i < 10; i++) {
    printf(" %d", ndigit[i]);
  }
  printf(", white space = %d, other = %d\n", nwhite, nother);
}

int is_white(int c) { return c == ' ' || c == '\t' || c == '\n'; }

// TODO:
// Exercise 1-13. Write a program to print a histogram of the lengths of words
// in its input. It is easy to draw the histogram with the bars horizontal; a
// vertical orientation is more challenging.

// TODO:
// Exercise 1-14. Write a program to print a histogram of the frequencies of
// different characters in its input.
