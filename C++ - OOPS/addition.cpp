#include <iostream>
using namespace std;

class Addition
{
    int a, b; // Private Data Members
    public:
        int result;
    
    // Setter Function for setting the details to the private members
    void setNumbers(int num1, int num2){
        a = num1;
        b = num2;
    }

    // Getter Function is used to show the details
    void getResult(){
        result = a + b;
        cout << "Addition of " << a << " and " << b << ": " << result << endl;
    }
};

class Namakarana{
    private:
    string firstname, lastname;
    public:
    string fathername, mothername;

    void setName(string fname, string lname);

    void getInfo(){
        cout << "The name of the child is " << firstname << " " << lastname << endl;
        cout << "The child's parent details are as follows: "<< endl;
        cout << "Father Name: " << fathername << endl;
        cout << "Mother Name: " << mothername << endl;
    }
};
// Scope Resolution Operator (::) is used to define the rules of the member function outside the class
// Syntax: return_type Class_name::function_name(parameters)
void Namakarana::setName(string fname, string lname){
    firstname = fname;
    lastname = lname;
}

int main(){
    Addition A1, A2, A3; // Objects are created for class Addition
    int n1, n2, n3, n4;
    cout << "Enter any 2 numbers: ";
    cin >> n1 >> n2;
    A1.setNumbers(n1, n2); // Calling the Setter function for passing the details
    A1.getResult(); // Calling the getter function for getting the details
    cout << "Enter another 2 numbers: ";
    cin >> n3 >> n4;
    A2.setNumbers(n3, n4);
    A2.getResult();
    A3.setNumbers(20,30);
    A3.getResult();

    Namakarana Child1, Child2;
    string fName, lName;
    
    cout << "Enter the First Name & Last Name of the Child: " << endl;
    cin >> fName >> lName;
    Child1.setName(fName, lName);
    cout << "Enter the Father Name & Mother Name of the Child: " << endl;
    cin >> Child1.fathername >> Child1.mothername;
    Child1.getInfo();
    Child2.fathername = "Surendra";
    Child2.mothername = "Surekha";
    Child2.setName("Sudarshana", "Rao");
    Child2.getInfo();
}