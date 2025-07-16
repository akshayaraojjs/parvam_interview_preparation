#include<stdio.h>
int main(){
    int num = 5;
    // Declaring & Assigning the address of num (Referencing)
    int* ptr = &num;
    printf("The value of num: %d\n", num);
    printf("The address of num: %x\n", &num);
    printf("The pointer contains: %x\n", ptr); //ptr alone contains the reference address
    printf("The address of pointer: %x\n", &ptr); //&ptr contains the address of pointer itself
    printf("The value present in pointer: %x\n", *ptr); //*ptr contains the value of the reference variable(Defrencing)
}