#include <stdio.h>
#include <limits.h>
#include <float.h>

// function to determine ranges of variables
// void determine_var_range(x)
// {
//
// }

main()
{
  // Sizes
  printf("add xyz-L (xyz-UL) to specify a long singed %ld (unsigned %ld) integer\n", -846L, 856UL);

  printf("Ranges from standard headers:\n");
  printf("CHAR_MIN: %d\n", CHAR_MIN);
  printf("CHAR_MAX: %d\n", CHAR_MAX);
  printf("UCHAR_MAX: %u\n\n", UCHAR_MAX);
  
  printf("SHRT_MIN: %d\n", SHRT_MIN);
  printf("SHRT_MAX: %d\n", SHRT_MAX);
  printf("USHRT_MAX: %u\n\n", USHRT_MAX);
  
  printf("INT_MIN: %d\n", INT_MIN);
  printf("INT_MAX: %d\n", INT_MAX);
  printf("UINT_MAX: %u\n\n", UINT_MAX);
  
  printf("LONG_MIN: %ld\n", LONG_MIN);
  printf("LONG_MAX: %ld\n", LONG_MAX);
  printf("ULONG_MAX: %lu\n\n", ULONG_MAX);
  
  printf("FLT_MIN: %e\n", FLT_MIN);
  printf("FLT_MAX: %e\n\n", FLT_MAX);
  
  printf("DBL_MIN: %e\n", DBL_MIN);
  printf("DBL_MAX: %e\n", DBL_MAX);
}
