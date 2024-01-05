#include <stdio.h>

int main()
{

  char c = 'A';
  char *p, **q;

  p = &c;
  q = &p;

  printf("Value of c: %c\n", c);
  printf("Value of c: %c\n", *p);
  printf("Value of c: %c\n", **q); //*q = content of p. content of p is address of &c. so **q value of c

  return 0;
}