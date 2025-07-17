#include<iostream>
using namespace std;

class Aadhar{
    private:
        string phone;
        int houseNumber, pincode;
        float age;
    public:
        string name, fathername, address;

    // setter
    void aadharRegister(int h_num, int pin, string mobile, float personAge){
        houseNumber = h_num;
        pincode = pin;
        phone = mobile;
        age = personAge;
    }

    void showRegistrationDetails(){
        cout << "You've successfully enrolled for Aadhaar Registration. Please check your details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Father Name: " << fathername << endl;
        cout << "Phone Number: " << phone << endl;
        cout << "Address: " << houseNumber << ", " << address << " " << pincode << endl;
    }
};

int main(){
    Aadhar Reg1, Reg2;
    int houseNum, pinCode;
    string phoneNum;
    float person_age;
    cout << "Enter the Name, Age, Father Name, Phone Number, House Number, Address, Pincode: " << endl;
    cin >> Reg1.name >> person_age >> Reg1.fathername >> phoneNum >> houseNum >> Reg1.address >> pinCode;
    Reg1.aadharRegister(houseNum, pinCode, phoneNum, person_age);
    Reg1.showRegistrationDetails();
    Reg2.name = "Ajay";
    Reg2.fathername = "Jay";
    Reg2.address = "Chikkabanavara";
    Reg2.aadharRegister(55, 560090, "9874577456", 20.5);
    Reg2.showRegistrationDetails(); 
}