#include <stdio.h>

int main() { // pointer is variable which stores the address of another variable and it is in char
    // char i = 'A';
    // char* j = &i;

    float i = 305.4; // pointer is variable which stores the address of another variable and it is in float
    float* j = &i;
    printf("The address of i is %p\n", &i);
    printf("The address of j is %p\n", j);

    printf("The value of address j is %f\n", *(&i));
    return 0;
}