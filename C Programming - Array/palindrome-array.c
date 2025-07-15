// [0, 1, 2 | 2, 1, 0] == Palindrome
#include <stdio.h>
int main()
{
    int arr[10], size, value, isPalindrome = 1;
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
    for(int i=0; i < size/2 ; i++){
        if(arr[i] != arr[size - i - 1]){
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome){
        printf("The given array is Palindrome");
    } else{
        printf("The given array is not a Palindrome");
    }
}

// It is a Palindrome
// [0, 1, 2, 2, 1, 0] => size = 6
// Step 1: i = 0 < 6/2 = 0 < 3 - T
// a[0] != a[6 - 0 - 1] 
// => a[0] != a[5]
// => 0 != 0 - F
// Step 2: i = 1 < 3 - T 
// a[1] != a[6 - 1 -1 ] => a[1] != a[4] => 1 != 1 - F
// Step 3: i = 2 < 3 - T 
// a[2] != a[6 - 2 -1 ] => a[2] != a[3] => 2 != 2 - F
// STOP
// isPalindrome = 1

// It is not Palindrome
// [0, 1, 2, 2, 3, 0] => size = 6
// Step 1: i = 0 < 6/2 = 0 < 3 - T
// a[0] != a[6 - 0 - 1] 
// => a[0] != a[5]
// => 0 != 0 - F
// Step 2: i = 1 < 3 - T 
// a[1] != a[6 - 1 -1 ] => a[1] != a[4] => 1 != 3 - T
// isPalindrome = 0
// STOP