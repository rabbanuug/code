#include <stdio.h>

int main()
{
  struct student
  {
    int id;
    char *name;
  };

  struct student one;
  
  char *ch = "Hi";

  one.id = 1;
  one.name = "Tahmid Rafi";

  printf("ID: %d\n", one.id);
  printf("Name: %s\n", one.name);
  printf("Name: %s\n", ch);// edited

  return 0;
}