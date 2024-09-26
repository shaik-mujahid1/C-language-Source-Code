#include <stdio.h>

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("You have Entered 1\n");
        break;
        case 2:
        printf("You have Entered 2\n");
        break;
        case 3:
        printf("You have Entered 3\n");
        break;
        case 4:
        printf("You have Entered 4\n");
        break;
        default:
        printf("Nothing Matched\n");
        
    }
    return 0;
}