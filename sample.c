#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);
  if(num == 10)
    printf("10と同じです");
  else
    printf("10ではありません");

  return 0;
}