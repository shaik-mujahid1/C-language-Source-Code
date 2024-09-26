#include <stdio.h> 
#include <string.h>
// strlen function is used to count the character excluding the null character
// strcpy function is used to copy of second string into the first string passed to it
// strcat function is used to concentrate two string
int main(){
    char st[] = "Mujahid";
    printf("%d\n", strlen(st));

    // char st[] = "mujahid";
    char source[30];
    strcpy(source,st);
    printf("%s %s", source, st);

    // char st[] = "Mujahid";
    char s1[50] = "Sajid ";
    char s2[40] = "Bhai";
    strcat(s1,s2);
    printf("%s", s1,s2);
    return 0;
}