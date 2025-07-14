#include<stdio.h>
int main(){
    int operand1, operand2;
    int result;
    printf("Enter any 2 numbers:");
    scanf("%d %d", &operand1, &operand2);
    // Arithmetic Operators
    result = operand1 + operand2;
    // \n is used for new line
    printf("Sum: %d \n", result);
    result = operand1 - operand2;
    printf("Difference: %d \n", result);
    result = operand1 * operand2;
    printf("Product: %d \n", result);
    result = operand1 / operand2;
    printf("Quotient: %d \n", result);
    result = operand1 % operand2;
    printf("Remainder: %d \n", result);
}