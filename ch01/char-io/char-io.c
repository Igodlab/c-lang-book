#include <stdio.h>

int while_get_put_char()
{
  int c;

  printf("while loop\n----------\n");
  while ((c = getchar()) != EOF && c != '7') {
  // while ((c = getchar()) != '7') {
    putchar(c);
  }
  printf("\n7 typed, end of while!\n");
}

double for_get_put_char()
{
  double c;

  printf("for loop\n--------\n");
  for (c = 0; getchar() != EOF; ++c) 
    ;
  printf("%.0f\n", c);
}

// 1.5.4 word counting function
#define IN 1 // inside a word
#define OUT 0 // outside a word

count() 
{
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;

  while (((c = getchar()) != EOF) && (c != '7')) {
    ++nc;
    if (c == '\n') { ++nl; }
    if (c == ' ' || c == '\n' || c == '\t') { state = OUT; }
    else if (state == OUT) { state = IN; ++nw; }
  }
  printf("number of: (lines, words, chars) = (%d, %d, %d)\n", nl, nw, nc);
}

main()
{
  printf("Welcome to the word game, to EXIT enter 7\n-------------------------------------------\n\n");
  while_get_put_char();
  // for_get_put_char();
  printf("Do we ever reach the END??\n");
  count();
}
