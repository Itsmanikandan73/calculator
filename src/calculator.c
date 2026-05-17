#include <stdio.h>

// Telling C this is a .asm files
extern double add(double a, double b);
extern double subtract(double a, double b);
extern double multiply(double a, double b);
extern double divide(double a, double b);

int main() {

	char choice;
	double a,b,result;
	double (*operation)(double, double);

	fprintf(stdout,"Enter operator [+, -, *, /]: ");
	fscanf(stdin," %c", &choice);

	fprintf(stdout,"Enter two numbers: ");
	fscanf(stdin,"%lf %lf", &a, &b);

	switch(choice) {
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
			fprintf(stderr,"Error: Invalid operator\n");
			return 1;
	}

	result = operation(a,b);
	fprintf(stdout,"\nResult:%.2f\n", result);

	return 0;
}
