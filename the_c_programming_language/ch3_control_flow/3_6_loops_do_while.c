#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
  int c, i, j;

  for (i = 0, j = strlen(s); i < j; i++, j--) {
    c = s[i], s[i] = s[j], s[j] = c;
  }
}

/* itoa:  convert n to characters in s */
void itoa(int n, char s[]) {
  int i, sign;
  if ((sign = n) < 0) {
    n = -n;
  }
  i = 0;
  do {
    s[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);
  if (sign < 0) {
    s[i++] = '-';
  }
  s[i] = 0;
  reverse(s);
}

int main() {
  char s[1000];
  itoa(1000, s);
  printf("%s\n", s);
  itoa(-1000, s);
  printf("%s\n", s);
  itoa(+1000, s);
  printf("%s\n", s);
  itoa(-1, s);
  printf("%s\n", s);
  itoa(0, s);
  printf("%s\n", s);
}

/*
TODO:
Exercise 3-4. In a two's complement number representation, our version of itoa
does not handle the largest negative number, that is, the value of n equal to
-(2wordsize-1). Explain why not. Modify it to print that value correctly,
regardless of the machine on which it runs.
*/

/*
TODO:
Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a
base b character representation in the string s. In particular, itob(n,s,16)
formats s as a hexadecimal integer in s.
*/

/*
TODO:
Exercise 3-6. Write a version of itoa that accepts three arguments instead of
two. The third argument is a minimum field width; the converted number must be
padded with blanks on the left if necessary to make it wide enough.
*/
