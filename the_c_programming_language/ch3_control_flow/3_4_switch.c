/*
  switch (expression) {
    case const-expr: statements
    case const-expr: statements
    default: statements
  }
*/

#include <stdio.h>
void counting() {
  int c, i, nwhite, nother, ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; i++) {
    ndigit[i] = 0;
  }
  while ((c = getchar()) != EOF) {
    switch (c) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      ndigit[c - '0']++;
      break;
    case ' ':
    case '\t':
    case '\n':
      nwhite++;
      break;
    default:
      nother++;
      break;
    }
  }
  printf("digits =");
  for (i = 0; i < 10; i++) {
    printf(" %d", ndigit[i]);
  }
  printf(", white space = %d, other = %d\n", nwhite, nother);
  return;
}

int main() {
  counting();
  return 0;
}

/*
TODO:
Exercise 3-2. Write a function escape(s,t) that converts characters like newline
and tab into visible escape sequences like \n and \t as it copies the string t
to s. Use a switch. Write a function for the other direction as well, converting
escape sequences into the real characters.
*/
