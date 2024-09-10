#include <stdio.h>
#include <math.h>
// function prototype
double division(double, double);

// function definition
double division(double a, double b) {
    if (b == 0){
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;
    } else {
        return a / b;
    }
}
// function prototype
double modulus(int, int);

// function definition
double modulus(int a, int b){
    if (b == 0){
        fprintf(stderr, "Invalid Argument for Modulus");
        return NAN;
    }else{
        return a % b;
    }
}
// function prototype
void print_menu();

// function definition
void print_menu(){
    printf("\n____________________________________________________________________________________________________________");
    printf("\n Welcome To Simple Calculator\n");
    printf("\nChoose One of the following option:");
    printf("\n 1. Addition");
    printf("\n 2.subtract");
    printf("\n 3. Multiply");
    printf("\n 4. Divide");
    printf("\n 5. Modulus");
    printf("\n 6. Power");
    printf("\n 7. Exit");
    printf("\n Now, enter your choice: ");
}
int main(){
    int choice;
    double first,second, result;
    while(1)
    {
    // function call
    print_menu();
    scanf("%d", &choice);
    if (choice == 7){
        break;
    }
    if (choice < 1 || choice > 7){
        fprintf(stderr, "Invalid Menu Choice.");
        continue;
    }

    printf("\nPlease enter the first number: ");
    scanf("%lf",&first);
    printf("\nNow, enter the second number: ");
    scanf("%lf",&second);

    switch (choice){
        case 1:  // Add
            result = first + second;  
            break;
         case 2: // sub
            result = first - second;
            break;
         case 3: // multiply
            result = first * second;
            break;
         case 4: // divide
            result = division(first, second);
            break;
         case 5: // modulus
            result = modulus(first, second);
            break;
         case 6: // power
            result = pow(first, second);
            break;
    }
    if (result != NAN){
    printf("\nResult of operation is %.2f", result);
    }
    } 
    return 0;
}