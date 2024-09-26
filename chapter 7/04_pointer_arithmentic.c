#include <stdio.h>

int main(){
    int a = 4;
    int* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of ptr is %u\n", &a);
    ptr--;

    printf("The value of ptr is %u\n", ptr);

    return 0;
}