#include <stdio.h>

int main (void){
    char str [5] = {'J', 'O', 'H', 'N', '\0'};
    printf("%s\n", str);
    char str2 [] = "JOHN";
    printf("%s\n", str2);
    return 0;
}