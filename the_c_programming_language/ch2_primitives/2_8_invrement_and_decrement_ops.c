#include <stdio.h>

void squeeze(char s[], int c) {
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++) {
    if (s[i] != c) {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
}

void _strcat(char s[], char t[]) {
  int i, j;

  i = j = 0;
  while (s[i] != '\0') {
    i++;
  }
  while ((s[i++] = t[j++]) != '\0') {
    ;
  }
}

int main() {
  char s[] = "hello, world!";
  squeeze(s, 'l');
  printf("%s\n", s);
  return 0;
}

/*
TODO:
Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each
character in s1 that matches any character in the string s2.
*/

/*
TODO:
Exercise 2-5. Write the function any(s1,s2), which returns the first location in
a string s1 where any character from the string s2 occurs, or -1 if s1 contains
no characters from s2. (The standard library function strpbrk does the same job
but returns a pointer to the location.)
*/
