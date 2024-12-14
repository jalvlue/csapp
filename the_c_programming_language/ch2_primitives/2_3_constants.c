#define O_VTAB '\013'
#define O_BELL '\007'

#define X_VTAB '\xb'
#define X_BELL '\x7'

#define MAXLINE 1000
char line[MAXLINE + 1];

#define LEAP 1 /* in leap year */
int days[31 + 28 + LEAP + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31];

/* strlen: return length of string s */
int _strlen(char s[]) {
  int i;

  while (s[i] != '\0') {
    ++i;
  }
  return i;
}

enum boolean { NO, YES };

enum escapes {
  BELL = '\a',
  BACKSPACE = '\b',
  TAB = '\t',
  NEWLINE = '\n',
  VTAB = '\v',
  RETURN = '\r'
};

enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
