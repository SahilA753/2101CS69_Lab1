#include<stdio.h>
#include <math.h>
double add( double a, double b){
    double c= a+b;
    return c;
}

int main() {
    char operator;
     double num1, num2;
    printf("Enter the operator (+,-,*,/,^): ");
    scanf("%c", &operator);
    printf("Enter the two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
        printf("%lf + %lf = %lf", num1, num2, add(num1,num2));
        break;

        
        default:
        printf("Wrong Operator");
        break;
    }

    return 0;
}