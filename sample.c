#include <stdio.h>

void keisan(int x, int y, int *a1, int *a2);
int main (void){
    int tasizan;
    int hikizan;
    keisan(30, 10, &tasizan, &hikizan); 
    printf("%d\n", tasizan);
    printf("%d\n", hikizan);
    return 0;
}

void keisan(int x, int y, int *a1, int *a2){
    *a1 = x + y;
    *a2 = x - y;
}