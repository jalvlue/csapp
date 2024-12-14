#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* atoi:  convert s to integer; version 2 */
int atoi(char s[]) {
  int i, n, sign;

  for (i = 0; isspace(s[i]); i++) {
  }
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-') {
    i++;
  }
  for (n = 0; isdigit(s[i]); i++) {
    n = 10 * n + (s[i] - '0');
  }
  return sign * n;
}

// TODO:
/* shellsort:  sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n) {
  int gap, i, j, temp;

  for (gap = n / 2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i++) {
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
        temp = v[j];
        v[j] = v[j + gap];
        v[j + gap] = temp;
      }
    }
  }
}

void reverse(char s[]) {
  int c, i, j;

  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    c = s[i], s[i] = s[j], s[j] = c;
  }
}

int main() {
  printf("%d\n", atoi("123"));
  printf("%d\n", atoi("+123"));
  printf("%d\n", atoi("-123"));
  printf("%d\n", atoi("  -123"));
  printf("%d\n", atoi(" \n \t\t\n  \t-123"));
}

/*
Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations
like a-z in the string s1 into the equivalent complete list abc...xyz in s2.
Allow for letters of either case and digits, and be prepared to handle cases
like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken
literally.
*/
