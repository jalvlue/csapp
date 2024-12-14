#include <stdio.h>
#include <unistd.h>

void copy_file();
void char_count();
void line_count();
void blanks_tabs_line_count();
void pretty_blanks();
void visible();
void counting();
void one_word_per_line();
int is_white(int);

int main() {
  one_word_per_line();
  // counting();
  // visible();
  // pretty_blanks();
  // blanks_tabs_line_count();
  // line_count();
  // char_count();
  // copy_file();
}

void copy_file() {
  putchar('h');
  for (int i = 0; i < 10; i++) {
    putchar(i % 10 + '0');
    if (i % 2 == 0) {
      putchar('\n');
    }
    sleep(1);
  }

  int c;
  putchar(EOF);

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}

void char_count() {
  long nc;
  nc = 0l;
  while (getchar() != EOF) {
    nc += 1;
  }
  printf("%ld\n", nc);

  double dnc;
  for (dnc = 0; getchar() != EOF; ++dnc) {
  }
  printf("%.0f\n", dnc);
}

void line_count() {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      nl++;
    }
  }
  printf("%d\n", nl);
}

// ex 1-8
void blanks_tabs_line_count() {
  int c;
  int count = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      count += 1;
    }
  }
  printf("%d\n", count);
}

// ex 1-9
void pretty_blanks() {
  int c, prev;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && prev == ' ') {
      continue;
    }
    putchar(c);
    prev = c;
  }
}

// ex 1-10
void visible() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    } else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}

#define IN 1
#define OUT 0

void counting() {
  int c, nl, nw, nc, state;

  state = OUT;
  // nl = (nw = (nc = 0));
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    nc++;
    if (c == '\n') {
      nl++;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      nw++;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

/*
Exercise 1-11. How would you test the word count program? What kinds of input
are most likely to uncover bugs if there are any?
*/

/*
Exercise 1-12. Write a program that prints its input one word per line.
*/
void one_word_per_line() {
  int c, prev;

  while ((c = getchar()) != EOF) {
    if (is_white(c)) {
      if (!is_white(prev)) {
        putchar('\n');
      }
    } else {
      putchar(c);
    }
    prev = c;
  }
}

int is_white(int c) { return c == ' ' || c == '\t' || c == '\n'; }
