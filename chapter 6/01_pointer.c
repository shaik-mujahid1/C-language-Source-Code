#include <stdio.h>

int main(){
    int i = 4;
    int* j = &i;
    printf("The address of i is %p\n", &i);
    printf("The address of j is %p\n", &i);

    printf("The value of j is %d\n", *(&i));
    return 0;
}