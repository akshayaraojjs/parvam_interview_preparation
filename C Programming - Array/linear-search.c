// Linear Search will consume more time as it is checking from first element until the key is found
#include<stdio.h>
int main(){
    int arr[10], size, value, key, found = 0;
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
    printf("Enter the element to be searched / Key Element:\n");
    scanf("%d", &key);
    for (int i=0; i < size; i++){
        if(arr[i]==key){
            found = 1;
            printf("Key element %d found at %d position", key, i);
            break;
        }
    }
    if(!found){
        printf("Key element is not present in the given array");
    }  
}
// [1, 3, 9, 7, 10, 13, 4] => Unsorted Array
// Size: 7, Key: 10
// Step 1: i = 0 < 7 - T
// a[0] == 10 => 1 == 10 - F
// Step 2: i = 1 < 7 - T
// a[1] == 10 => 3 == 10 - F
// Step 3: i = 2 < 7 - T
// a[2] == 10 => 9 == 10 - F
// Step 4: i = 3 < 7 - T
// a[3] == 10 => 7 == 10 - F
// Step 5: i = 4 < 7 - T
// a[4] == 10 => 10 == 10 - T
// i = 4 => Position Found 
// STOP
// More Time Consumption
// Time Complexity