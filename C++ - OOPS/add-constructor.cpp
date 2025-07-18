#include <iostream>
using namespace std;

class Add
{
    int a, b, c;
public:
    int result;

    // Default Constructor
    Add(){
        a = 0;
        b = 0;
        c = 0;
        cout << "Default Constructor has been called without any parameters" << endl;
    }
    // Paramterized Constructor - 1 Parameter
    Add(int x){
        a = x;
        b = c = 0;
        result = a;
        cout << "The value of a is " << a << " and "
        << " Sum is equal to " << result << endl;  
    }
    // Paramterized Constructor - 2 Parameters
    Add(int num1, int num2){
        a = num1;
        b = num2;
        c = 0;
        result = a + b;
        cout << "The value of a and b is " << a << " " 
        << b << " and Sum of 2 numbers is equal to " << result << endl;
    }
    // Paramterized Constructor - 3 Parameters
    Add(int n1, int n2, int n3){
        a = n1;
        b = n2;
        c = n3;
        result = a + b + c;
        cout << "The value of a and b is " << a << " " 
        << b << " " << c << " and Sum of 3 numbers is equal to " << result << endl;
    }
    // We have performed the constructor overloading (Polymorphism Example) using same constructor with different number of parameters
};

int main(){
    Add sum1, sum2, sum3;
    int number1, number2, number3;
    cout << "Enter any 3 numbers:" << endl;
    cin >> number1 >> number2 >> number3;
    sum1 = Add(number1);
    sum2 = Add(number1, number2);
    sum3 = Add(number1, number2, number3);
}