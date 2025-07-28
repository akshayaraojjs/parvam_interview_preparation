#include <iostream>  // Header File for handling the Std Input & Output functions(cin & cout)
using namespace std; // to avoid writing std in each and every line, if we don't use this then whenever we use cin & cout, we need to write std::cin & std::cout
// By using namespace std, we will get access to "ostream class" to make use of cin & cout directly
// main function
void sum()
{                      // Function Declaration
    int sum = 10 + 20; // Function Definition
    printf("Sum: %d", sum);
    // return sum; we cannot use return when void has been used
}

int add(int a, int b){
    int sum;
    sum = a + b;
    return a, b, sum; // sum can be returned when function is called
}

int main()
{
    int number1;
    // If-else
    // if(condition)
    // True Statement
    // else
    // False Statement

    // Nested If-else
    // if(first condition)
    // True Statement(optional)
    // if(second condition)
    // True Statement(optional)
    // else
    // False Statement
    // else (first condition fails)
    // False Statement

    if (10 > 6)
    { // First condition
        printf("10 is greater");
        if (10 > 5)
        { // Only Enters this block when 1st condition is success, then checks for second condition
            printf("10 is again greater");
        }
        else
        {
            printf("10 is not greater than 5"); // Comes when Second Condition Fails
        }
    }
    else
    {
        printf("10 is not greater than 6"); // Directly comes to this block when first condition fails
    }

    // If-else Ladder: If-else-if-else
    // if(first-condition){
    // } else if(second-condition){
    // } else
    // switch(condition){
    // case 1: statement 1;
    // break;
    // case 2: statement 2;
    // break;
    // default : default statement;
    // break;
    // }

    // while(condition){ First condition is checked and then entering the while block
    // Statements
    // }
    // do{        First enter the while block and then check for the condition
    // Statements
    // } while(condition)

    // Initialization is done earlier and the increnment/decrement is done within the while loop
    // i = 0 // Initialization before entering the loop
    // while(i < 10) // condition
    // {
    // Statements
    // i++; // Incrementing within while loop
    // }

    // Initialization can be done earlier(optional) and the increnment/decrement can done within the while loop(optional)
    // i = 0 // Initialization before entering the loop
    // while(i < 10) // condition
    // {
    // Statements
    // i++; // Incrementing within while loop
    // }

    // 1. For Loop is used when you number of steps you are going to check the condition (Predefined)
    // While Loop is used when the number of steps is unknown (Not defined)
    // 2. Initialization is done within the for loop
    // Initialization is done earlier before entering while loop
    // 3. Increment or decrement is done implicitly by for loop
    // While loop - increment or decrement should be handled explicitly
    // 4. Initialization, Increment or decrement is limited within the For Loop
    // Initialization, Increment or decrement is done outside the while loop, so need to be taken care
    // for(initialization;condition;increment/decrement)
    int i = 0; // Initialization is done outside // i value can be used outside well
    while (i < 10)
    {
        printf("%d", i);
        i++;
    }
    for (int j = 0; j < 10; j++)
    { // j value is limited to for loop
        printf("%d", j);
    }
    // Function are the block of code writtern to perform the specific tasks without repeating for multiple times
    // Function Declartion - function name()
    // Function Definition
    // function name(){
    // defining the set of rules to perform some task
    // }
    // Function Call
    // name(); calling the function
    // returntype functionName() // Syntax for declaring the function
    sum(); // function call
    // add(20, 40);
    int num1, num2;
    num1 = 20;
    num2 = 40;
    printf("Sum of %d and %d: %d",num1, add(num1, num2));
}