#include  <stdio.h>
#include  <string.h>

struct employee
{
    int code;
    float salary;
    char name[15];
};

int main(){
    struct employee e1;
    e1.code = 1541;
    strcpy(e1.name, "Mujahid");
    e1.salary = 54.44;
    printf("%d %f %s", e1.code, e1.salary,e1.name);

    return 0;
}