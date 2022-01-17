#include <stdio.h>

int fruits(int apple);
int main (void){
    int hoge;
    hoge = fruits(10);
    if (hoge < 3000){
        printf("予算に収まりました");
    } else {
        printf("予算オーバーです");
    }
    return 0;
}

int fruits(int apple){
    int kingaku;
    kingaku = apple * 300;
    return kingaku;
}