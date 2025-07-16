#include<stdio.h>
#include<stdlib.h>
int main(){
    float* fptr;
    int num;
    printf("Enter the number of elements to be stored:");
    scanf("%d", &num);
    // Syntax for Calloc:
    // ptr_name = (datatype_of_ptr) calloc(num_of_elements, sizeof(datatype))
    fptr = (float*) calloc(num, sizeof(float)); //Allocating the memory required using calloc
    printf("Enter %d float values:\n", num);
    for(int i=0; i<num; i++){
        scanf("%f", &fptr[i]);
    }
    printf("The given float elements are as follows:\n");
    for(int i=0; i<num; i++){
        printf("%.2f\n", fptr[i]);
    }
}