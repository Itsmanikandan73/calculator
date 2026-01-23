#include <stdio.h>

int main(){

    char choices;
    float x, y, result;

    printf("Please enter choice using numbers\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division \n");
    scanf("%s", &choices);

    printf("\nPlease enter two numbers: \n");
    scanf("%f %f", &x, &y);

    switch(choices){
        case '1':
            result = x + y;
            break;
        case '2':
            result = x - y;
            break;
        case '3':
            result = x * y;
            break;
        case '4':
            result = x / y;
            break;
        default:
            printf("\nYou entered Invalid format\n");
    }
    printf("\nThe Result: %.2f\n", result);
}
