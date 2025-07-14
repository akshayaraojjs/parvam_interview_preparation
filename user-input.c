#include<stdio.h>
int main(){
    int age;
    float weight;
    char symbol;
    printf("Enter your age:");
    // & - is used for storing the value in the address specified for the variable
    scanf("%d",&age);
    printf("You're %d years old.\n", age);
    printf("Enter your weight:");
    scanf("%f",&weight);
    printf("Your Weight is %f kg.\n", weight);
    printf("Enter any character:");
    scanf(" %c",&symbol);
    printf("You've entered this character - %c.\n", symbol);
}