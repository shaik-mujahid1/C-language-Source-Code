#include <stdio.h>

int main(){
    if(2434){
        printf("This is executed\n");
    }
    if(1){
        printf("This is also executed\n");
    }
    if(0){
        printf("I am Zero iam not executed\n");
    }
    if('c'){
        printf("This is also executed and it is a character\n");
    }
    return 0;
}