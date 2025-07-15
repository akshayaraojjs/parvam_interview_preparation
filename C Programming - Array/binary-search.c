#include <stdio.h>
int main()
{
    int arr[10], size, value, key, low, high, mid, found = 0;
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
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Key Element found at %d position\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found)
    {
        printf("Key Element found");
    }
    else
    {
        printf("Key Element not found");
    }
}

// [1, 5, 7, 9, 13, 17] => Size = 6, Key = 13
// l = 0, h = 6 - 1 = 5, m = (0 + 5)/ 2 = 2
// Step1: 0 <= 5 - T
// m = 2
// a[2] == 13 => 7 == 13 - F
// 7 < 13 - T
// l = 2 + 1= 3
// Step 2: 3 <= 5 - T
// m = (3 + 5)/2 = 8/2 = 4
// a[4] == 13 => 13 == 13 - T
// mid = 4, found = 1
// STOP

// Example 2
// [1, 5, 7, 9, 13, 17, 21, 27, 33, 37, 45] => Size = 11, Key = 27
// l = 0, h = 11 - 1 = 10, m = (0 + 10)/ 2 = 5
// Step1: 0 <= 10 - T
// m = 5
// a[5] == 27 => 17 == 27 - F
// 17 < 27 - T
// l = 5 + 1 = 6
// Step 2: 6 <= 10 - T
// m = (6 + 10)/2 = 16/2 = 8
// a[8] == 27 => 33 == 27 - F
// 33 < 27 - F
// h = 8 - 1 = 7
// Step 3: 6 <= 7
// m = (6 + 7)/2 = 13/2 = 6
// a[6] == 27 => 21 == 27 - F
// 21 < 27 - T
// l = 6 + 1 = 7
// Step 4: 7 <= 7 - T
// m = (7 + 7)/2 = 14/2 = 7
// a[7] == 27 => 27 == 27 - T
// STOP