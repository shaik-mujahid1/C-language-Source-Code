#include <stdio.h>

int main(){ // This for the table You can use this code.
    int n;
    printf("Enter The Table Number\n");
    scanf("%d", &n);

    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n", n,i, n*i);
    }
        printf("Thanks Visit Again!\n");
    
    return 0;
}
