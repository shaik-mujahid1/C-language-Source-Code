#include <stdio.h>

int main(){
    int i = 5;
    int* j = &i;
    int** k = &j;
    printf("The value of i is %d\n", i);
    printf("The value of j is %d\n", *j);
    printf("The value of j is %d\n", *(&i));
    printf("The value of j is %d\n", *(&i));
    return 0;
}