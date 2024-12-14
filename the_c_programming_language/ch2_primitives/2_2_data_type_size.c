#include <stdio.h>
// #include <float.h>
// #include <limits.h>

void print_size();

int main() {
  print_size();
  return 0;
}

/*
Size of char:               1 byte
Size of int:                4 bytes
Size of short int:          2 bytes
Size of long int:           8 bytes
Size of long long int:      8 bytes
Size of float:              4 bytes
Size of double:             8 bytes
Size of long double:       16 bytes
*/
void print_size() {
  printf("%-24s %4ld byte\n", "Size of char:", sizeof(char));
  printf("%-24s %4ld bytes\n", "Size of int:", sizeof(int));
  printf("%-24s %4ld bytes\n", "Size of short int:", sizeof(short int));
  printf("%-24s %4ld bytes\n", "Size of long int:", sizeof(long int));
  printf("%-24s %4ld bytes\n", "Size of long long int:", sizeof(long long int));
  printf("%-24s %4ld bytes\n", "Size of float:", sizeof(float));
  printf("%-24s %4ld bytes\n", "Size of float:", sizeof(float));
  printf("%-24s %4ld bytes\n", "Size of double:", sizeof(double));
  printf("%-24s %4ld bytes\n", "Size of long double:", sizeof(long double));
}

/*
TODO:
Exercise 2-1. Write a program to determine the ranges of char, short, int, and
long variables, both signed and unsigned, by printing appropriate values from
standard headers and by direct computation. Harder if you compute them:
determine the ranges of the various floating-point types.
*/
