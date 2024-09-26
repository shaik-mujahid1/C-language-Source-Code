#include <stdio.h>

int main(){
    int age;
    printf("Enter Your age: \n");
    scanf("%d", &age);
    if(age>70){
        printf("you cannot drive because your are a senior citizen and your age is greater than 70\n");
    }
    else if(age>18){
        printf("You can drive\n");
    }
    else if(age>40){
        printf("You can drive and your are a elder\n");
    }
    else if(age>55){
        printf("You can drive and you are a senior citizen\n");
    }
    else{
        printf("You cannot drive\n");
    }
    return 0;
}