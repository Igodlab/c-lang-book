#include <stdio.h>

#define MAXLINE 1000 // max input line char length

int lineLength(char line[], int maxline); // `get` line function signature
void copy(char to[], char from[]); // `copy` function signature

// print the longest line
main()
{
  int len; // current line length
  int max; // max length seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; // longest line saved

  max = 0;
  while ((len = lineLength(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  // if there was a line
  if (max > 0) {
    printf("%s", longest);
  }
  return 0;
}

// lineLength: read a line into `s` then return its length
int lineLength(char s[], int lim) 
{
  int c, i;
  for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

// copy: copy `from` into `to. Assume `to` is big enough
void copy(char to[], char from[]) 
{
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}

