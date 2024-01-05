#include <stdio.h>

int x = 1;

void myfnc(int y)
{
  y = y * 2; //10
  x = x + 10; //20
  printf("myfnc, x = %d, y = %d\n", x, y);
}

int main()
{
  int y = 5;

  x = 10;

  myfnc(y);// y = 10, x = 20

  printf("main, x = %d, y = %d\n", x, y);

  return 0;
}