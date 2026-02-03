#include <stdio.h>

//declearing functions 
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){

    char choice;
    double a,b, result;
    double(*operation)(double, double);    //pointer variable name is *operation 

    puts("Enter the operator(1: +, 2: -, 3: *, 4: /): ");
    scanf("%c", &choice);

    puts("Enter two numbers");
    scanf("%lf %lf", &a, &b);

    switch(choice){
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            puts("Invalid Operator");
            return 1;
    }

    result = operation(a, b);    // get answer from pointer
    printf("\nResult: %.2f\n", result);

    return 0;
}

double add(double a, double b){ return a + b;}
double subtract(double a, double b){ return a - b;}
double multiply(double a, double b){ return a * b;}
double divide(double a, double b){
    if (b == 0){
        puts("Error: Division by zero!");
        return 0;
    }
    return a / b;
}
