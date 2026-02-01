#include <stdio.h>

//declearing functions 
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main(){

    char choice;
    float a,b, result;
    float(*operation)(float, float);    //pointer variable name is *operation 

    puts("Enter the operator(+, -, *, /): ");
    scanf("%c", &choice);

    puts("Enter two numbers");
    scanf("%f %f", &a, &b);

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
    printf("\nResult: %.lf\n", result);

    return 0;
}

float add(float a, float b){ return a + b;}
float subtract(float a, float b){ return a - b;}
float multiply(float a, float b){ return a * b;}
float divide(float a, float b){
    if (b == 0){
        puts("Error: You can't divide by zero!");
        return 0;
    }
    return a / b;
}
