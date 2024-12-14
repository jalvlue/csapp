#include <stdio.h>

#define MAXLINE 1000

void longest_line();
int _getline(char line[], int maxline);
void copy(char to[], char from[]);
void print_80_char_lines();
void reverse(char s[]);
void reverse_input_lines();
int _getline2();
void print_length_of_lines();

int main() {
  print_length_of_lines();
  // reverse_input_lines();
  // print_80_char_lines();
  // longest_line();
  return 0;
}

void longest_line() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = _getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {
    printf("%s", longest);
  }
}

int _getline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}

int _getline2() {
  int c, i;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
  }
  if (c == '\n') {
    ++i;
  }
  return i;
}

/*
Exercise 1-16. Revise the main routine of the longest-line program so it will
correctly print the length of arbitrary long input lines, and as much as
possible of the text.
*/
void print_length_of_lines() {
  int len;

  while ((len = _getline2())) {
    printf("%d\n", len);
  }
}

/*
Exercise 1-17. Write a program to print all input lines that are longer than 80
characters.
*/
void print_80_char_lines() {
  int len;
  char line[MAXLINE];

  while ((len = _getline(line, MAXLINE)) > 0) {
    if (len > 80) {
      printf("%s", line);
    }
  }
}

/*
Exercise 1-18. Write a program to remove trailing blanks and tabs from each line
of input, and to delete entirely blank lines.
*/

/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time.
*/
void reverse(char s[]) {
  int len;
  int left, right;

  len = 0;
  while (s[len] != 0) {
    len += 1;
  }

  left = 0;
  right = len;
  while (left < right) {
    int temp = s[left];
    s[left] = s[right];
    s[right] = temp;
  }
}

void reverse_input_lines() {
  int len;
  char line[MAXLINE];

  while ((len = _getline(line, MAXLINE)) > 0) {
    reverse(line);
    printf("%s", line);
  }
}
