#include<stdio.h>
int main(){
    // declared an array
    // Syntax: datatype name_of_an_array[size]
    int num[10], size, value;
    printf("Enter the number of elements");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    // Getting input for the array
    for(int i=0; i<size; i++){
        scanf("%d", &value);
        num[i] = value;
    }
    printf("The array elements are as follows:\n");
    // Showing the array elements
    for (int j=0; j<size;j++){
        printf("%d\n",num[j]);
    }
}