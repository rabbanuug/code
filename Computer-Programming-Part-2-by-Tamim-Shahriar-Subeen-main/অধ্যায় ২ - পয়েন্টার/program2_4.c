#include <stdio.h>

int main()
{
  int x = 10;
  int *p = &x;
  printf("Address of x: %p %d\n", &x, &x);

  // p = &x;

  printf("Value of x: %d\n", x);

  *p = 20;

  printf("Value of x: %d\n", x);
  printf("Address of x: %p %d\n", &x, &x);
  printf("Address of p: %p %d\n", &p, &p);

  return 0;
}
