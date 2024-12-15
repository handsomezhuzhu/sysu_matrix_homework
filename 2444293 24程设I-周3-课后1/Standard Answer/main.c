#include <stdio.h>

int main(int argc, char *argv[]) {
  char method[5];
  char url[256];
  char version[9];
  char host_val[256];
  char data[4096];

  scanf("%s\n", method);
  scanf("%s\n", url);
  scanf("%s\n", version);
  scanf("%s\n", host_val);
  scanf("%s", data);

  printf("%s %s %s\r\n", method, url, version);
  printf("Host:%s\r\n", host_val);
  printf("\r\n");
  printf("%s", data);
  return 0;
}
