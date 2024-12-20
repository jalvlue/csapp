#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main() {
  char line[MAXLINE];
  int found = 0;

  while (_getline(line, MAXLINE) > 0) {
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      found++;
    }
  }
  return found;
}

int _getline(char line[], int max) {
  int c, i;

  for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = 0;
  return i;
}

int strindex(char s[], char t[]) {
  int i, j, k;

  for (i = 0; s[i] != 0; i++) {
    for (j = i, k = 0; t[k] != 0 && s[j] == t[k]; j++, k++) {
      if (k > 0 && t[k] == 0) {
        return i;
      }
    }
  }
  return -1;
}
