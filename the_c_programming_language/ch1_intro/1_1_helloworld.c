#include <stdio.h>
#include <stdlib.h>

void print_backslash_c();

int main() {
  print_backslash_c();
  printf("hello, world\n");
  fprintf(stdout, "hello, world\n");
  exit(EXIT_SUCCESS);
}

/*
Exercise 1-1. Run the "hello, world" program on your system. Experiment with
leaving out parts of the program, to see what error messages you get.
*/

/*
Exercise 1-2. Experiment to find out what happens when prints's argument string
contains \c, where c is some character not listed above.

Unknown escape sequence '\c'
*/
void print_backslash_c() {
  printf("hello, world\c");
  return;
}
