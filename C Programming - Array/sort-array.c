// [0, 5, 3, 6, 2]
// Sort in Ascending Order: [0, 2, 3, 5, 6]
// Sort in Descending Order: [6, 5, 3, 2, 0]
// Bubble Sort Technique
#include <stdio.h>
int main()
{
    int arr[10], size, value, temp;
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

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Index %d: %d\t", i, arr[i]);
    }
}

// for(int i = 0; i < size; i++)
//     {
//         for(int j = 0; j < size; j++)
//         {
//             if(arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// [0, 5, 3, 6, 2] => size = 5
// Step 1: i = 0 < 5 - T, j = 0 < 5 - T
// a[j] > a[j + 1] => a[0] > a[0+1] => a[0] > a[1]
// 0 > 5 - F
// ---------------------------------------
// Step 2: i = 0 < 5 - T, j = 1 < 5 - T
// a[1] > a[2] => 5 > 3 - T
// temp = a[1] => temp = 5, a[1] = empty
// a[1] = a[2] => a[1] = 3, a[2] = empty
// a[2] = temp => a[2] = 5
// [0, 3, 5, 6, 2]
// ---------------------------------------
// Step 3: i =0, j = 2 < 5 - T
// a[2] > a[3] => 5 > 6 - F
// ---------------------------------------
// Step 4: i =0, j = 3 < 5 - T
// a[3] > a[4] => 6 > 2 - T
// temp = a[3] => temp = 6, a[3] = empty
// a[3] = a[4] => a[3] = 2, a[4] = empty
// a[4] = temp => a[4] = 6
// [0, 3, 5, 2, 6]
// ---------------------------------------
// Step 5: i =0, j = 4 < 5 - T
// a[4] > a[5] => 2 >  - F
// Stop J loop
// [0, 3, 5, 2, 6]
// ---------------------------------------
// Step 6: i = 1 < 5 - T, j = 0 < 5 - T
// a[0] > a[1] => 0 > 3 - F
// ---------------------------------------
// Step 7: i = 1 < 5 - T, j = 1 < 5 - T
// a[1] > a[2] => 3 > 5 - F
// ---------------------------------------
// Step 8: i = 1 < 5 - T, j = 2 < 5 - T
// a[2] > a[3] => 5 > 2 - T
// temp = a[2] => temp = 5, a[2] = empty
// a[2] = a[3] => a[2] = 2, a[3] = empty
// a[3] = temp => a[3] = 5
// [0, 3, 2, 5, 6]
// ---------------------------------------
// Step 9: i = 1 < 5 - T, j = 3 < 5 - T
// a[3] > a[4] => 5 > 6 - F
// ---------------------------------------
// STOP J block
// Step 10: i = 2 < 5 - T, j = 0 < 5 - T
// a[0] > a[1] => 0 > 3 - F
// ---------------------------------------
// Step 11: i = 2 < 5 - T, j = 1 < 5 - T
// a[1] > a[2] => 3 > 2 - T
// temp = a[1] => temp = 3, a[1] = empty
// a[1] = a[2] => a[1] = 2, a[2] = empty
// a[2] = temp => a[2] = 3
// [0, 2, 3, 5, 6]
