#include <stdio.h>

int main (void){
    int *apple, orange;
    apple = &orange;
    printf("%p\n",apple);
    printf("%p\n",&orange);
    return 0;
}