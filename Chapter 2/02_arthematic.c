#include <stdio.h>
    /*x + y = z 
    where; x,y are operands and +,= are operators and z is the result*/
int main(){
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d\n and value of b is %d\n and sum of these is %d\n", a,b,c);
    // modulus operators is used to get the remainder
    printf("The remainder when a is divisible by b is %d", a%b);
    return 0;
}   