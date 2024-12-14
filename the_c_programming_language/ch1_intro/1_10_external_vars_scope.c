#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int _getline(void);
void copy(void);
void external_longest_line();

int main() {
  external_longest_line();
  return 0;
}

void external_longest_line() {
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = _getline()) > 0) {
    if (len > max) {
      max = len;
      copy();
    }
  }
  if (max > 0) {
    printf("%s", longest);
  }
}

int _getline(void) {
  int c, i;

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void copy(void) {
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0') {
    ++i;
  }
}

/*
TODO:
Exercise 1-20. Write a program detab that replaces tabs in the input with the
proper number of blanks to space to the next tab stop. Assume a fixed set of tab
stops, say every n columns. Should n be a variable or a symbolic parameter?
*/

/*
TODO:
Exercise 1-21. Write a program entab that replaces strings of blanks by the
minimum number of tabs and blanks to achieve the same spacing. Use the same tab
stops as for detab. When either a tab or a single blank would suffice to reach a
tab stop, which should be given preference?
*/

/*
TODO:
Exercise 1-22. Write a program to ``fold'' long input lines into two or more
shorter lines after the last non-blank character that occurs before the n-th
column of input. Make sure your program does something intelligent with very
long lines, and if there are no blanks or tabs before the specified column.
*/

/*
Exercise 1-23. Write a program to remove all comments from a C program. Don't
forget to handle quoted strings and character constants properly. C comments
don't nest.
*/

/*
Exercise 1-24. Write a program to check a C program for rudimentary syntax
errors like unmatched parentheses, brackets and braces. Don't forget about
quotes, both single and double, escape sequences, and comments. (This program is
hard if you do it in full generality.)
*/