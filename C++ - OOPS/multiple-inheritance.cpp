#include<iostream>
using namespace std;
// Student & Employee -> Developer
class Student{
    public:
    string name;

    void showStudent(){
        cout << name << " is a Student!" << endl;
    }
};

class Employee{
    public:
    string company;

    void showCompany(){
        cout << "Person is also an Employee of " << company << endl;
    }
};

// Syntax for Multiple Inheritance:
// class DerivedClass : visibility_mode BaseClass1, visibility_mode BaseClass2
class Developer : public Student, public Employee{
    public:
    string skills[5];
    void showDeveloperSkills(){
        cout << name << " is having skillset: " << endl;
        for(int i=0; i<5; i++){
            cout << i+1 << ". " << skills[i] << endl;
        }
    }
};

int main(){
    string tech[5], name_of_person, name_of_company;
    // Student S1; // Object of Student Class
    // Employee E1; // Object of Employee Class
    Developer D1; // Object of Developer Class which can inherit the data members & member functions of both Student & Employee
    cout << "Enter the Person Name & his Company Name: ";
    cin >> name_of_person >> name_of_company;
    // S1.name = name_of_person;
    // S1.showStudent();
    // E1.company = name_of_company;
    // E1.showCompany();
    cout << "Enter the Skillset: "<< endl;
    // Taking Input for Tech
    for(int i=0; i<5; i++){
        cin >> tech[i];
    }
    // Copying the values from Tech Array to Skills Array
    for(int i=0; i<5; i++){
        D1.skills[i] = tech[i]; // Assigning the value to its own data member - skills[]
    }
    D1.name = name_of_person; // Assigning the Value to the Data member of Student Class (name) 
    D1.company = name_of_company; // Assigning the Value to the Data member of Employee Class (company) 
    D1.showStudent(); // Invoking the member function of Student Class - showStudent()
    D1.showCompany(); // Invoking the member function of Employee Class - showCompany()
    D1.showDeveloperSkills(); // Invoking the member function of its own class 
}