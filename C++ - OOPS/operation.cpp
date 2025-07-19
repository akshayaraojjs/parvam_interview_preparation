#include <iostream>
using namespace std;

// Base Class
class Operation
{
private:
    string type_of_operation;

public:
    int a, b;

    // Constructor
    Operation()
    {
        type_of_operation = "NA";
        a = 0;
        b = 0;
    }

    Operation(string type)
    {
        type_of_operation = type;
    }

    void setNumbers(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void showOperationType()
    {
        cout << "We are performing the "
             << type_of_operation << " Operation." << endl;
        cout << "The 2 numbers are " << a << " and "
             << b << endl;
    }
};

// Derived Class of Base Class
class Addition : public Operation
{
public:
    int sum;

    void calculate()
    {
        sum = a + b; // Inheriting the data members from Base Class
        cout << "The sum of " << a << " and " << b
             << ": " << sum << endl;
    }
};

int main()
{
    int num1, num2;
    string operationType;

    Addition A1; // Derived Class Object
    cout << "Enter the type of Operation: " << endl;
    cin >> operationType;
    // We are using Parameterized Constructor while creating the object
    Operation O1(operationType);  // Base Class Object
    cout << "Enter any 2 numbers: " << endl;
    cin >> num1 >> num2;
    O1.setNumbers(num1, num2);     // setting the values using setter function
    O1.showOperationType();
    A1.setNumbers(num1, num2);
    A1.calculate();
}
