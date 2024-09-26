#include <stdio.h>

int main(){
    int a = 4;
    int b = 2;
    int c = 7;
    printf("The value is %d\n", a*b/c);
    printf("The value is %d\n", 3*b/2*c + 7*a);
    // 3*b/2*c + 7*a
    // 3*b/2*c + 28
    // 6/2*c + 28
    // 3*c + 28
    // 21 + 28
    // 49
    return 0;
}