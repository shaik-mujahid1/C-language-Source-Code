#include <stdio.h>

int main(){
    // int age = 15;
    int age;
    printf("Enter Your Age:\n");
    scanf("%d",&age);

    if(age>20){
        printf("Your age is greater than 20");
    }

    else{
        printf("Your age is not greater than 20");
    }
    return 0;
}