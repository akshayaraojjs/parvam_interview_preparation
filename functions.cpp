#include<iostream>
using namespace std;

void product(){
    int multiply;
    multiply = 20 * 30;
    cout << "Product of 20 & 30: " << multiply;
}

int multiply(int x, int y){ // here x and y are called as parameters
    int product;
    product = x * y;
    return product; // Returning only the final result
    // return 0; when nothing is there to return
}

int main(){
    int num1, num2;
    cout << "Enter any 2 numbers";
    cin >> num1 >> num2;
    product(); // Calling the product method
    cout << endl <<  "Final product of "<< num1 << "and" << num2 << ": " << multiply(num1, num2); // Second method is expecting 2 arguments, here num1 & num2 are called as arguments
}