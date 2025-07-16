#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *iptr;
    int size, new_size;
    printf("Enter the size you want to allocate:\n");
    scanf("%d", &size);
    iptr = (int *)malloc(size * sizeof(int)); // malloc is allocating the desired amount of space to the given pointer
    printf("Enter the %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &iptr[i]);
    }
    printf("The elements are as follows:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", iptr[i]);
    }
    printf("Enter the additional size to be reallocated:");
    scanf("%d", &new_size);
    // Syntax for Realloc:
    // ptr_name = (datatype_of_ptr) realloc(ptr_name, extra_size * sizeof(datatype))
    iptr = (int*) realloc(iptr, new_size * sizeof(int)); //Reallocating the extra memory to the given pointer
    printf("Enter %d new elements:\n", new_size);
    for (int i = 0; i < new_size; i++)
    {
        scanf("%d", &iptr[i]);
    }
    printf("The new elements are as follows:\n");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d\n", iptr[i]);
    }
    // Syntax for Free:
    // free(ptr_name) 
    free(iptr); //Free up the memory used by the pointer
}