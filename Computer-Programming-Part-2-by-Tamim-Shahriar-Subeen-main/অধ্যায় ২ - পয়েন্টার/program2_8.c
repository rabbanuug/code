#include <stdio.h>

int main()
{
  int x = 10, y;
  int *p, *q;

  p = &x;
  q = &y;
  y = *p;// y = 10
  *p = 15;//x = 15
  *q = 20;//y = 20

  printf("Value of x: %d\n", x);//15
  printf("Value of y: %d\n", y);//20
  printf("Value of *p: %d\n", *p);
  printf("Value of *q: %d\n", *q);

  return 0;
}