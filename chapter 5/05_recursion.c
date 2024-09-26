#include <stdio.h>
// function prototype
int factorial(int);

// funnction definition
// factorial(5) = 1 x 2 x 3 x 4 x 5
// factorial(4) = 1 x 2 x 3 x 4 
// factorial(3) = 1 x 2 x 3
// factorial(n) = 1 x 2 x 3 x 4........ x (n-1) x n
// factorial(n-1) = 1 x 2 x 3 x 4........ x (n-1)
// we can write factorial(n) as
// factorial(n) = factorial(n-1) x n
// how function run check
// factorial(3)
// factorial 2 x 2
// factorial 1 x 1 x 2
// factorial 0 x 1 x 1 x 2
// factorial -1 x 0
int factorial(int n){
    if(n == 1 || n == 0){ // base condition
        return 1;
    }
    return factorial(n-1) * n; // factorial(n) = factorial(n-1) x n
}
int main(){
    int a = 5;
    printf("The factoiral of %d is %d\n", a, factorial(a));
    return 0;
}