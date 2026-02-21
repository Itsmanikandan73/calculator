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

    fputs("Enter the operator[0x1: +, 0x2: -, 0x3: *, 0x4: /]: \n", stdout);
    fscanf(stdin,"%c", &choice);

    fputs("Enter two numbers\n", stdout);
    fscanf(stdin,"%lf %lf", &a, &b);

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
            fputs("Error: Invalid Operator\n", stderr);
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
        fputs("Error: Division by zero!\n", stderr);
        return 0;
    }
    return a / b;
}
