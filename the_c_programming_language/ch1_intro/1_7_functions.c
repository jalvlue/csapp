#include <stdio.h>

int power(int base, int n);

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }
  return 0;
}

/*
return-type function-name(parameter declarations, if any) {
  declarations
  statements
}
*/
int power(int base, int n) {
  int i, p;

  p = 1;
  for (i = 1; i <= n; i++) {
    p *= base;
  }
  return p;
}

// TODO:
// Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to
// use a function for conversion.
