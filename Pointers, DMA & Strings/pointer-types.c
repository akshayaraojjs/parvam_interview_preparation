#include<stdio.h>
int main(){
    float f = 20.53;
    int n = 15;
    float* fptr = &f;  //Normal Pointer refering some variable
    int* iptr; //Wild Pointer
    int* ptr2 = NULL; //Null Pointer
    void* ptr3 = NULL; //Void Pointer
    printf("The float pointer contains: %p\n", fptr);
    printf("The int pointer contains: %p\n", iptr);
    printf("The null pointer contains: %p\n", ptr2);
    printf("The void pointer contains: %p\n", ptr3);
    ptr3 = &f; //Work as a Float Pointer
    // Typecasting the Void Pointer
    // Syntax: *(datatype)(ptr)
    // Ex: *(int*)(ptr) // Void Pointer -> Int Pointer
    // Ex: *(float*)(ptr) // Void Pointer -> Float Pointer
    printf("The void pointer referring float contains: %p address and %f value:\n", ptr3, *((float*)ptr3));
    ptr3 = &n; //Works as a Integer Pointer
    printf("The void pointer referring int contains: %p address and %d value:\n", ptr3, *((int*)ptr3));
}