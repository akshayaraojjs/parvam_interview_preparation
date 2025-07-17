// Access Specifier: Public, Private & Protected
#include <iostream>
using namespace std;

class TrainBooking
{
private:
    // private data member
    string aadhar, phone;

public:
    // public data members
    string name, address, source, destination, date, time;
    int age, train_no;
    // Member Function - Setter
    void setDetails(string a_no, string p_no)
    {
        aadhar = a_no;
        phone = p_no;
    }
    void getDetails()
    {
        cout << "The Booking Details are as follows:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Address: " << address << "\n";
        cout << "Aadhaar Number: " << aadhar << "\n";
        cout << "Phone Number: " << phone << "\n";
        cout << "Train Number: " << train_no << "\n";
        cout << "Source: " << source << "\n";
        cout << "Destination: " << destination << "\n";
        cout << "Date of Departure: " << date << "\n";
        cout << "Time of Departure: " << time << "\n";
    }
};

int main()
{
    TrainBooking T1;
    string phone_num, aadhar_num;
    cout << "Enter the Booking Details:\n";
    cout << "Name:";
    cin >> T1.name;
    cout << "Age: "; 
    cin >> T1.age;
    cout << "Address: "; 
    cin >> T1.address;
    cout << "Train Number: "; 
    cin >> T1.train_no;
    cout << "Source: "; 
    cin >> T1.source;
    cout << "Destination: "; 
    cin >> T1.destination;
    cout << "Date of Departure: "; 
    cin >> T1.date;
    cout << "Time of Departure: "; 
    cin >> T1.time;
    cout << "Aadhaar Number: "; 
    cin >> aadhar_num;
    cout << "Phone Number: ";
    cin >> phone_num;
    T1.setDetails(aadhar_num, phone_num);
    T1.getDetails();
}