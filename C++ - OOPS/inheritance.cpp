#include<iostream>
using namespace std;

// Base Class
class Parent{
    public:
    string name;

    void showParentDetails(){
        cout << "Parent's name: " << name << endl;
    }
};
// Derived Class
// Syntax: 
// class DerivedClass : visibility_mode BaseClass
// visibility mode: public, private & protected
class Child : public Parent{
    public:
    string child_name;

    void showChildDetails(){
        cout << "Child name: " << child_name << endl;
    }
};

int main(){
    Parent p1; // Object of Base Class
    Child c1; // Object of Child Class
    p1.name = "Jay";
    // p1.child_name // We can't access the data members and member functions of the Child Class from Parent Class
    // p1.showChildDetails()
    c1.child_name = "Akshay";
    p1.showParentDetails();
    c1.name = "Jayashankar";
    c1.showParentDetails();  // Child class can access the member function & data members of the Base class 
    c1.showChildDetails();
}