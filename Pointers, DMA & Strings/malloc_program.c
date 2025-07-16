#include<stdio.h>
#include<stdlib.h> // Used for DMA functions
// DMA - Dynamic Memory Allocation
// Ex: malloc(), calloc(), realloc(), free()
int main(){
    int* iptr;
    int size;
    printf("Enter the size you want to allocate:\n");
    scanf("%d", &size);
    // Syntax for malloc:
    // ptr_name = (datatype_of_pointer) malloc(n * sizeof(datatype))
    iptr = (int*) malloc(size * sizeof(int)); //malloc is allocating the desired amount of space to the given pointer
    printf("Enter the %d elements:\n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &iptr[i]);
    }
    printf("The elements are as follows:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",iptr[i]);
    }
}