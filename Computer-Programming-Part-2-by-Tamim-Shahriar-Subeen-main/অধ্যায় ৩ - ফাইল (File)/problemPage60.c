#include <stdio.h>
#include <stdlib.h>

int main()
{

  FILE *fp = fopen("files//in3_7.txt", "r");

  if (fp == NULL)
  {
    perror("Can't open file");
    return EXIT_FAILURE;
  }

  int ch;
  ch = fgetc(fp);
  printf("%c\n", (char)ch);

  ch = fgetc(fp);
  printf("%c\n", (char)ch);

  fseek(fp, sizeof(char) * 3, SEEK_CUR);
  ch = fgetc(fp);
  printf("%c\n", (char)ch);

  fclose(fp);

  return 0;
}