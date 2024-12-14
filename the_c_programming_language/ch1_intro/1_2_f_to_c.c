#include <stdio.h>
#include <unistd.h>

void f_to_c_while();
void f_to_c_for();

int main() {
  f_to_c_while();
  printf("\n\n");
  f_to_c_for();
}

void f_to_c_while() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("f\tc\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0f / 9.0f) * (fahr - 32.0f);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

void f_to_c_for() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr += 20) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }

  printf("\n\n");
  for (fahr = 300; fahr >= 0; fahr -= 20) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}

/*
Exercise 1-3. Modify the temperature conversion program to print a heading above
the table.
*/

/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit
table.
*/

/*
Exercise 1-5. Modify the temperature conversion program to print the table in
reverse order, that is, from 300 degrees to 0.
*/
