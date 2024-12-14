// #include <ctype.h>

/* atoi: ascii2int convert s to integer */
int atoi(const char s[]) {
  int i, n;

  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }
  return n;
}

int lower(int c) {
  if (c >= 'A' && c <= 'Z') {
    return c + 'a' - 'A';
  } else {
    return c;
  }
}

unsigned long int next = 1;

int rand(void) {
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65536) % 32768;
}

void srand(unsigned int seed) { next = seed; }

int main() { return 0; }

/*
TODO:
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal
digits (including an optional 0x or 0X) into its equivalent integer value. The
allowable digits are 0 through 9, a through f, and A through F.
*/