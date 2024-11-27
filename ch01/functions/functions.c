#include <stdio.h>
#include <assert.h>

// factorial
long fac(int x) 
{
  if (x == 1) { return 1; }
  else { return x * fac(x - 1); } 
}

long fac_w_stop(int x, int stop)
{
  assert (stop >= 1);
  if (x == stop + 1) { return stop + 1; }
  else { return x * fac_w_stop(x - 1, stop); }
}

// binomial coef
double binom_coef(int n, int k)
{
  assert(n > k); // make sure that n > k
  int stop = n - k;
  int nom = fac_w_stop(n, stop);
  int den = fac(k);
  return nom / den;
}


main()
{
  int f = 7;
  int n = 8;
  int k = 3;
  printf("Factorial of %d is %ld\n", f, fac(f));
  printf("Binomial coef of n=%d, k=%d is %.2f\n", n, k, binom_coef(n, k));
  printf("Binomial coef of n=%d, k=%d is %ld\n", n, k, fac(n) / (fac(k) * fac(n - k)));
}
