#include <stdio.h>

int main()
{
  int x = 100;
  int *p = NULL;

  printf("Value of x: %d\n", x);
  // this code will provide error because of dereferencing
  //size of pointer p is not declared
  printf("Value of *p: %d\n", *p);

  return 0;
}
