#include <stdio.h>

int main (void){
    int array [5] = {12, 13, 14};
    int i;
    for(i = 0; i < 5; i++){
        printf("%d番目は %d です\n", i, array[i]);
    }
    return 0;
}