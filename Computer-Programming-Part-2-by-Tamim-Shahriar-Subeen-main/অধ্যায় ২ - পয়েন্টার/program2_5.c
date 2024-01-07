#include <stdio.h>

int main()
{
  int x = 10;
  int *p = &x;

  printf("Value of x: %d\n", x); //10

  // p = &x;
  *p = 20;

  printf("Value of x: %d\n", x);//20

  x = 15;

  printf("Value of x: %d\n", x);//15
  printf("Value of x: %d\n", *p);//15
  printf("Value stored at location %p is %d\n", p, *p); // 123432 15

  printf("Address of x: %p\n", &x); //address
  printf("Address of x: %p\n", p); //address

  return 0;
}