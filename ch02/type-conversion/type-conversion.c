#include <stdio.h>

// convert a to integer
int a2i(char s[])
{
  int i, n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }
  return n;
}

main() 
{
  int n;
  char st[] = "10a9417";
  n = a2i(st);
  printf("the result is %d\n", n);
  int ax = st[2] - '0';
  printf("\nax = %d\n", ax);
  printf("\nst[2] = 'a' = %d\n", 'A');
  printf("\n\nNote that chars are converted to int in ASCII:\n'1' - '0' = 49 - 48 = 1\n'2' - '0' = 50 - 48 = 2\n'7' - '0' = 55 - 48 = 7\n");
}
