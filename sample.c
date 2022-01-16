#include <stdio.h>

int main(void) {
  int i = 10;
  while (i < 5){
      printf("while文です\n");
  }
  do{
      printf("do while文です\n");
  }while (i < 5);
  return 0;
}