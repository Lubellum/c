#include <stdio.h>

int fruits(int apple);
int main (void){
    int hoge;
    hoge = fruits(5);
    printf("%d", hoge);
    return 0;
}

int fruits(int apple){
    int kingaku;
    kingaku = apple * 300;
    return kingaku;
}