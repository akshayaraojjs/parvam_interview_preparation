#include<stdio.h>
// Function Declaration
// return_type function_name(datatype parameter1, ....)
// 1) No Return Type and No Parameters
int add(){ // Declare
    printf("Adding the Numbers\n"); // Define
}
// 2) No Return Type and Using Parameters
int sum(int a, int b){ // Declare
    printf("Adding two numbers: %d and %d\n", a, b); // Define
}
// 3) Return the value without Parameters
int sumWithoutParameter(){ // Declare
    return 5;
}
// 4) Return the value along with Parameters
int sumOf2(int num1, int num2){ // Declare
    return num1 + num2;
}
// Here a & b are called as Parameters

int main(){
    add(); // Function call
    sum(2,5); // Here 2 & 5 are called as Arguments
    // printf("%d",sumWithoutParameter());
    int value = sumWithoutParameter();
    printf("%d\n",value);
    int sum = sumOf2(10, 20);
    printf("Sum of two numbers: %d", sum);
}