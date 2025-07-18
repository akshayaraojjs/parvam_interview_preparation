#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string dept;
public:
    string name, designation;

    // Constructor has been created
    // Default Constructor
    // It will be called everytime when the Object has been created
    Employee(){
        empId = 0;
        dept = "NA";
        name = "NA";
        designation = "NA";
        cout << "Default Constructor has been Called" << endl;
    }

    // Parameterized Construtor
    // It acts like a Setter Function
    // If Constructor with 4 arguments has been recieved then this constrcutor will be called
    Employee(int e_id, string e_dept, string e_name, string e_desgn){
        empId = e_id;
        dept = e_dept;
        name = e_name;
        designation = e_desgn;
        cout << "Paramterized Constructor with 4 parameters has been Called" << endl;
    }

    // If Constructor with 2 arguments has been recieved then this constrcutor will be called
    Employee(int e_id, string e_dept){
        empId = e_id;
        dept = e_dept;
        name = "NA";
        designation = "NA";
        cout << "Paramterized Constructor with 2 parameters has been Called" << endl;
    }

    void showEmpDetails(){
        cout << "Welcome " << name << 
        "! You'r Employee ID: " << empId << 
        ". You will be working in " << dept << 
        " Department  as a " << designation << endl;
    }
};

int main(){
    Employee emp1, emp2, emp3, emp4;
    int empID;
    string empDept, eName, eDesgn;
    cout << "Enter the following details of the Employee: (ID, Name, Department, Designation)" << endl;
    cin >> empID >> eName >> empDept >> eDesgn;
    // We are passing the arguments to the Parameterized Constructor
    // Syntax: obj_name = ClassName(arg1, arg2, ...)
    emp1 = Employee(empID, empDept, eName, eDesgn);
    emp1.showEmpDetails();
    emp2.showEmpDetails();
    emp3 = Employee(2, "Testing", "Ajay", "Senior Developer");
    emp3.showEmpDetails();
    emp4 = Employee(3, "Designing");
    emp4.showEmpDetails();
}