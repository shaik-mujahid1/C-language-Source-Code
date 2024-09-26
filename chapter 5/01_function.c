#include <stdio.h>
// function prototype
int sum(int , int);

// function definition
int sum(int x, int y){
printf("The sum is %d\n", x+y);
return x + y;
}
int main(){
    int a = 34;
    int b = 43;
    sum(a,b);
    // int c = a + b;
    // printf("The sum is %d\n", c);

    int a1 = 89;
    int b1 = 37;
    sum(a1,b1);
    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);

    int a2 = 33;
    int b2 = 78;
    sum(a2,b2);
    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);

    return 0;
}