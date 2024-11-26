#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

#define LOWER_BOUND 0 // no column break for CONSTANTS
#define UPPER_BOUND 300

// farenheit to celsius function 
float f2c(float f)
{
  return (5.0/9.0) * (f - 32.0);
}

float while_f2c(int low, int up, int stp)
{
  float f = low; // setting float f equal to int lower, converts & binds the int 0 to float 0.00 
  printf("using while loop\n----------------\n");
  while (f <= up) { // comparing float f with int upper = 300, automatically converts it to float 300.00
    printf("%.2f\t%.2f\n", f, f2c(f));
    f += stp;
  }
  printf("\n\n");
}

float for_f2c(int stp)
{
  printf("using for loop (backwards)\n--------------------------\n");
  for (int f = UPPER_BOUND; f >= LOWER_BOUND; f -= stp) {
    float fahr = f;
    printf("%.2f\t%.2f\n", fahr, f2c(fahr));
  }
  printf("\n\n");
}

main() 
{
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;

  while_f2c(lower, upper, step);
  for_f2c(step);
}
