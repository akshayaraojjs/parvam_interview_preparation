// C Programming Comment
// Multi Line
// Comment
//Pre-processor directives / Header Files
#include<stdio.h> 
// stdio.h is used for standard input & output functions
// Ex: printf, scanf
// main function
int main(){
    // printf("Hello Students!");
    // Datatypes - int, float, char, double, long
    // Variables - Containers which can store some values
    // Rules for creating the variables - Naming conventions
    // 1. Starting letter of the variable should be an alphabet - Ex: a-z, A-Z
    // 2. Variable should be a single word, it cannot contain space and special characters excluding (_)Underscore:
    // Ex: first name, 1name, #name Not allowed
    // Instead - first_name/firstName/FirstName
    // snake_case / camelCase / PascalCase
    // 3. We can use the numbers as well followed by alphabets
    // Ex: number1, number_20
    // C is a Case Sensitive Language, Ex: name & Name are different variables
    int marks = 95;
    float percentage = 95.5;
    char grade = 'A';
    // Format Specifier - %d (int), %f (float), %c (char)
    printf("Marks: %d \n", marks);
    printf("Percentage: %.2f \n", percentage);
    printf("Grade: %c \n", grade);
}