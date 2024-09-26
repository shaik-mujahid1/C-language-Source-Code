#include <stdio.h>
// function prototype
int swap(int*, int*);

// function definition
int swap(int *a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // return 0;
}
int main(){
    int x = 7;
    int y = 5;
    swap(&x, &y);
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    return 0;
}