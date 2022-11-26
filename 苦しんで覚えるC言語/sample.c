#include <stdio.h>

int main(void)
{
  // char str[256] = "123456";
  char str[256] = "ABCDEF";
  scanf("%s", &str[5]);
  printf("%s\n",str);
  return 0;
}