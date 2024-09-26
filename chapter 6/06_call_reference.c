#include <stdio.h>
// function prototype
int sum(int*, int*);

// function definition
int sum(int* a, int* b){
    *a = 7;
    return (*a + *b);
}
int main(){
    int x = 4;
    int y = 3;
    printf("The sum of x and y is %d\n", sum(&x,&y));
    printf("The value of x is %d\n", x);
    return 0;
}