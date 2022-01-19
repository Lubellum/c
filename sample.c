#include <stdio.h>

int main (void){
    int *p, i;
    p = &i;
    *p = 15;
    printf("%d\n", *p);
    printf("%d\n", i);
    return 0;
}