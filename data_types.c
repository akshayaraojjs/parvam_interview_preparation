#include<stdio.h>
int main(){
    int num = 10, age;
    float percent = 82.5, height;
    char letter = 'A';
    printf("The value of num is %d\n", num);
    printf("The value of percent is %f\n", percent);
    printf("The value of letter is %c\n", letter);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your age is \t %d", age);
    printf("\nEnter your height:\r");
    scanf("%f", &height);
    printf("Your height is \v %.2f cms", height);
}