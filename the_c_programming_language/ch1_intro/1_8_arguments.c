#include <stdio.h>

int power(int base, int n);

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }
}

// C function arguments are all call by value, the callee would have a copy of
// that argument in its stack frame, modify the args would no corrupt the
// caller's copy
int power(int base, int n) {
  int p;

  for (p = 1; n > 0; --n) {
    p *= base;
  }
  return p;
}
