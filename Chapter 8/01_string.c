#include <stdio.h>

    // string is char arrays terminated by  null character
    int main(){ 
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc";
    for (int i = 0; i <=3; i++)
    {
        printf("The character is %c\n", st[i]);
    }
    
    // printf("The character is %c\n", st[i]);
    return 0;
}