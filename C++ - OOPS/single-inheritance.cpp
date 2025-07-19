#include<iostream>
using namespace std;
// Student->Employee
class Student{
    public:
    string name;
    void setName(string sName){
        name = sName;
    }

    void showMessage(){
        cout << name << " was a Student!" << endl;
    }
};

// Default Visibility mode used is Private Mode
class Employee : public Student{
    public:

    void showDetails(){
        cout << name  << " is now working as an Employee" << endl;
    }
};

int main(){
    string name_of_person;
    Student S1;
    Employee E1;
    cout << "Enter the name of the person: " << endl ;
    cin >> name_of_person;
    S1.setName(name_of_person);
    S1.showMessage();
    E1.setName(name_of_person);
    E1.showDetails();
}