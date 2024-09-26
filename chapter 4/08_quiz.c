#include <stdio.h>

int main(){
    int n;
    int i = 1;
    printf("Enter The value of n: \n");
    scanf("%d", &n);

    do
    {
        printf("The value is %d\n", i);
        i++;
    } while (i<=n);
    
    return 0;
}