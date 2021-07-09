#include <stdio.h>
main()
{
  char filename[20], ch;
  FILE *fp, *f;
  clrscr();
  printf("\nEnter the name of the file");
  scanf("%s", filename);
  fp = fopen(filename, "r");
  f = fopen("dummy", "w");
  if (fp == NULL)
  {
    printf("\nError in reading");
    getch();
    return;
  }
  while ((ch = fgetc(fp)) != EOF)
    fputc(ch, f);
  fclose(fp);
  fclose(f);
  printf("\nEnter the name of the file");
  scanf("%s", filename);
  f = fopen(filename, "r");

  while ((ch = fgetc(f)) != EOF)
    fputc(ch, stdout);
  fclose(f);

  getch();
}
