#include <stdio.h>

int main(){
    int i;
    for (int i = 1; i <=6; i++)
    {
        // if(i==4){
            // continue; // continue function skip the program 
        // }
        if(i==4){
            break;; // break function stop the program 
        }
        printf("The value of i is %d\n", i);
    }
    
    return 0;
}