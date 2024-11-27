#include <stdio.h>

// get n bits from position p
unsigned getBits(unsigned x, int p, int n) 
{
  return (x >> (p+1-n) & ~(~0<<n));
}

main() 
{
  int x = 0b11001011;  // (binary)
  int p = 4; // (start from bit 4)
  int n = 3; // (want 3 bits)

  printf("& \tbitwise AND\n| \tbitwise inclusive OR\n^ \tbitwise exclusive OR\n<<\tleft shift\n>>\tright shift\n~ \tone's complement (unary)\n\n");
  printf("bit-number (0b11001011=%d) has %d bits counting after bit position %d\n", x, getBits(x, p, n), p);
}
