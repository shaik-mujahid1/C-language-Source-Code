#include <stdio.h>
// sunction prototype
 int change(int a);
// function definition
int change(int a){
    a = 77; // misnomor
    return 0;
}
int main(){
    int b = 42;
    change(b); // The value of b remain same as initialize 
    printf("b is %d", b);
    return 0;
}