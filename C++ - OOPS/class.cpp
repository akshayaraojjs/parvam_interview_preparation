#include<iostream>
using namespace std;
// Syntax for declaring the class:
// class Class_name{
    // data members declaration
    // define the member functions
// };
class Student{
  public: //access specifier
    //  Data Members 
    int age, sem;
    string name, college, branch;
    char section;
    //  Member Function
    void print(){
        cout << "My name is " << name << ". I'm currently studying in " << sem 
        << " sem in " << branch << " branch at " << college << " college under " 
        << section << " section.\n";
    }
};

int main(){
    // Student Object has been created
    // Syntax for creating the object:
    // Class_name object1, object2;
    // Dot(.) operator is used to access the data members of the class using the Object
    Student std1, std2, std3;
    std1.name = "Akshay";
    std1.age = 24;
    std1.branch = "ISE";
    std1.college = "RRIT";
    std1.sem = 8;
    std1.section = 'A';
    std1.print();

    std2.name = "Ajay";
    std2.age = 23;
    std2.branch = "CSE";
    std2.college = "SIT";
    std2.sem = 6;
    std2.section = 'B';
    std2.print();

    cout << "Enter the name:";
    cin >> std3.name;
    cout << "Enter the age:";
    cin >> std3.age;
    cout << "Enter the branch:";
    cin >> std3.branch;
    cout << "Enter the college name:";
    cin >> std3.college;
    cout << "Enter the section:";
    cin >> std3.section;
    cout << "Enter the sem:";
    cin >> std3.sem;
    std3.print();
}