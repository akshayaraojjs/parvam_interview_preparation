#include<stdio.h> // Header File
int main(){ // main function
    // Syntax: 
    // for(initialization; condition ; increment/decrement)
    // Printing first 5 numbers
    for(int i=1; i <= 5; i++){
        printf("%d\n", i);
    }
    // Print multiples of 2
    printf("First 10 multiples of 2 are as follows:\n");
    for (int i=1; i<=20; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
    
}