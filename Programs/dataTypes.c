#include <stdio.h> //Header file: printf(), sizeof()
#include <limits.h>
int main()
{
  int x = 8;
  short unsigned int y;
  char c = 'p';
  long l = 5;

  // siceof() returns number of bytes of a variable
  printf("\n"); 
  printf("Size of x variable: %lu bytes\n",sizeof(x));
  printf("Size of y variable: %lu bytes\n",sizeof(y));
  printf("Size of c variable: %lu bytes\n",sizeof(c));
  printf("Size of l variable: %lu bytes\n",sizeof(l));

  printf("\n");
  printf("Number of bits in a byte: %d\n",CHAR_BIT);
  printf("Minimum value for a SIGNED CHAR object: %d\n",SCHAR_MIN);
  printf("Maximum value for a SIGNED CHAR object: %d\n",SCHAR_MAX);
  printf("Maximum value for an UNSIGNED CHAR object: %d\n",UCHAR_MAX);
  return 0;

}
