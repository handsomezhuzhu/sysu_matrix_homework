#include <stdio.h>

int main(int argc, char *argv[]) {
  unsigned int sect_1 = 0, sect_2 = 0, sect_3 = 0, sect_4 = 0;
  scanf("%d.%d.%d.%d", &sect_1, &sect_2, &sect_3, &sect_4);
  sect_1 = sect_1 << 24;
  sect_2 = sect_2 << 16;
  sect_3 = sect_3 << 8;

  unsigned int res = sect_1 | sect_2 | sect_3 | sect_4;
  printf("%u", res);
  return 0;
}