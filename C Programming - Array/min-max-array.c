#include<stdio.h>
int main(){
    int arr[10], size, value, min, max;
    printf("Enter the number of elements:\n");
    scanf("%d", &size);
    printf("Enter the array ele\nments:\n");
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
    min = max = arr[0];  // Starting Point
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        } 
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The maximum value in the array: %d \n", max);
    printf("The minimum value in the array: %d \n", min);
}

// [10, 6, 8, 23, 7, 3] => Size = 6
// min = max = a[0] => 10
// Step 1: i = 0 < 6 - T
// a[0] < 10 => 10 < 10 - F
// a[0] > 10 => 10 > 10 - F
// ------------------------------------
// Step 2: i = 1 < 6 - T
// a[1] < 10 => 6 < 10 - T
// min = 6
// a[1] > 10 => 6 > 10 - F
// ------------------------------------
// Step 3: i = 1 < 6 - T
// a[1] < 10 => 6 < 10 - T
// min = 6, max = 10
// a[1] > 10 => 6 > 10 - F
// ------------------------------------
// Step 4: i = 2 < 6 - T
// a[2] < 6 => 8 < 6 - F
// a[2] > 10 => 8 > 10 - F
// ------------------------------------
// Step 5: i = 3 < 6 - T
// a[3] < 6 => 23 < 6 - F
// a[3] > 10 => 23 > 10 - T
// max = 23, min = 6
// ------------------------------------
// Step 6: i = 4 < 6 - T
// a[4] < 6 => 7 < 6 - F
// a[4] > 23 => 7 > 23 - F
// ------------------------------------
// Step 7: i = 5 < 6 - T
// a[5] < 6 => 3 < 6 - T
// min = 3
// a[5] > 23 => 3 > 23 - F
// ------------------------------------
// Step 8: i = 6 < 6 - F
// min = 3, max = 23