#include<stdio.h>
int main(){
    int arr[10], size, value;
    printf("Enter the number of elements:\n");
    scanf("%d", &size);
    printf("Enter the array elements:\n");
    for(int i=0; i<size; i++){
        scanf("%d", &value);
        arr[i] = value;
    }
    printf("Original Array:\n");
    for(int i=0; i<size; i++){
        printf("Index %d: %d\t", i, arr[i]);
    }
    printf("Reversed Array:\n");
    for(int i=size-1; i>=0; i--){
        printf("Index %d: %d\t", i, arr[i]);
    }
}