#include <stdio.h>

#define VEC_LENGTH_CAP 10000

// count number of occurrences of digits (similar to numpy.unique)
count() 
{
  int c, n_white, n_letter;
  char vec_raw[VEC_LENGTH_CAP];
  char vec_clean[VEC_LENGTH_CAP];
  
  int i = 0; // counter for vec_raw
  int j = 0; // counter for vec_clean

  // clean white spaces
  printf("Enter a string:\n");
  n_white = 0;
  while ((c = getchar()) != EOF && c != '\n' && i < VEC_LENGTH_CAP) {
    vec_raw[i] = c;
    i++;
    if (c != ' ') { 
      vec_clean[j] = c;
      j++;
    }
    else {
      n_white++;
    }
  }
  
  // add null terminators
  vec_raw[i] = '\0';
  vec_clean[i] = '\0';

  // printf("Number of white spaces: %d\nRaw vec: %s\nCleaned vec: %s\n\n", n_white, vec_raw, vec_clean);
    printf("Raw string (%d chars): [%s]\n", i, vec_raw);
    printf("Cleaned string (%d chars): [%s]\n", j, vec_clean);
    printf("Number of spaces removed: %d\n", n_white);

  return 0;

}

main() 
{
  count();
  return 0;
}
