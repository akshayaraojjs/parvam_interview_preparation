#include <iostream>
using namespace std;

class Multiply
{
private:
    int num1, num2; // Private Data Members
public:
    int product;

    void setValues(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void findProduct()
    {
        product = num1 * num2;
        cout << "Product of " << num1 
        << " and " << num2 << " is: " << product << endl;
    }
    // Constructor has been created with the same name as that of the Class Name
    // Syntax: ClassName(){
    //          }
    // It is a type of Default Constructor
    // Because it doesn't require any parameters(No Parameters)
    Multiply(){
        num1 = 1;
        num2 = 1;
        cout << "The Constructor has been called!" << endl;
    }
};

int main(){
    int a, b;
    Multiply m1, m2, m3, m4; // Objects created for Multiply Class
    // Constructor has been called as soon as the Object is created
    // How many time it will be called? Called as that of the number of objects which has been created
    cout << "Enter any 2 numbers:" << endl;
    cin >> a >> b;
    m1.setValues(a,b);
    m1.findProduct();
    m2.findProduct(); // No Values has been passed 
    m3.setValues(20, 30);  
    m3.findProduct(); // No Values has been passed 
    m4.findProduct(); // No Values has been passed 
}