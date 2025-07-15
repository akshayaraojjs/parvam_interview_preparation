#include<stdio.h>
int main(){
    int arr[10], size, value, sum = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &size);
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &value);
        arr[i] = value;
    }
    printf("\nOriginal Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Index %d: %d\t", i, arr[i]);
    }

    for(int i=0; i < size; i++){
        sum += arr[i];
    }
    printf("Sum of Array Elements: %d", sum);
}

// [1,3,5,7,9] => size = 5, sum = 0
// Step 1: i = 0 < 5 - T
// sum = sum + a[0] => sum = 0 + 1 = 1
// Step 2: i = 1 < 5 - T
// sum = sum + a[1] => sum = 1 + 3 = 4
// Step 3: i = 2 < 5 - T
// sum = sum + a[2] => sum = 4 + 5 = 9
// Step 4: i = 3 < 5 - T
// sum = sum + a[3] => sum = 9 + 7 = 16
// Step 5: i = 4 < 5 - T
// sum = sum + a[4] => sum = 16 + 9 = 25
// Step 6: i = 5 < 5 - F
// sum = 25
// STOP