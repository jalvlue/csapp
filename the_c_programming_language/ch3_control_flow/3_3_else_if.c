#include <stdio.h>

int binsearch(int x, const int v[], int n) {
  int low, mid, high;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (v[mid] == x) {
      return mid;
    } else if (v[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

  printf("%d\n", binsearch(0, v, 9));
  printf("%d\n", binsearch(3, v, 9));
  printf("%d\n", binsearch(8, v, 9));
  printf("%d\n", binsearch(9, v, 9));
  printf("%d\n", binsearch(-1, v, 9));
}

/*
TODO:
Exercise 3-1. Our binary search makes two tests inside the loop, when one would
suffice (at the price of more tests outside.) Write a version with only one test
inside the loop and measure the difference in run-time.
*/
