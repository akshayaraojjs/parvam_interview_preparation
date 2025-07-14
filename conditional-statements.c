#include <stdio.h>
int main()
{
    int number1, number2, number3;
    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 % 2 == 0)
    {
        printf("The given number %d is even number\n", number1);
    }
    else
    {
        printf("The given number %d is odd number\n", number1);
    }
    // Syntax:
    // if(condition){
    //  True Statement
    // } else{
    //  False Statement
    // }
    // Check the greatest of 3 numbers:
    // Relational Operator: >, <, >=, <= , ==, !=
    // Logical Operator: && (And), || (Or), ~ (Not)
    // If-Else Ladder
    if (number1 > number2 && number1 > number3)
    {
        printf("Number 1: %d is greatest of 3 numbers\n", number1);
    }
    else if (number2 > number3)
    {
        printf("Number 2: %d is greatest of 3 numbers\n", number2);
    }
    else
    {
        printf("Number 3: %d is greatest of 3 numbers\n", number3);
    }
    // Nested If-Else
    if (number1 > number2)
    {
        if (number1 > number3)
        {
            printf("Number 1: %d is greatest of 3 numbers\n", number1);
        }
    }
    else
    {
        if (number2 > number3)
        {
            printf("Number 2: %d is greatest of 3 numbers\n", number2);
        }
        else
        {
            printf("Number 3: %d is greatest of 3 numbers\n", number3);
        }
    }
    // Ternary Operator
    // Greatest of 2 numbers
    // Syntax:
    // (condition) ? True Statement : False Statement
    (number1 > number2) ? printf("Number 1 is greater\n") : printf("Number 2 is greater\n");
    // Greatest of 3 numbers using Nested Ternary Operator
    // (1 > 2 && 1 > 3) ? First is highest : (2 > 3) ? (2 is highest) : (3 is highest)
    (number1 > number2 && number1 > number3)
            ? printf("%d is greatest", number1)
                : (number2 > number3)
            ? printf("%d is greatest", number2)
                : printf("%d is greatest", number3);
    // (Condition 1) 
        // ? True Statement 
            // : (Condition 2) 
        // ? True Statement 
            // : False Statement 
}