#include<iostream>
using namespace std;

int main(){
    int id;
    string usn, name, branch;
    char section;

    cout << "Enter your ID Number:";
    cin >> id;
    cout << "Enter your Name:";
    cin >> name;
    cout << "Enter your USN:";
    cin >> usn;
    cout << "Enter your branch:";
    cin >> branch;
    cout << "Enter your section:";
    cin >> section;

    cout << "You're name is " << name << ", Your Admission ID is " 
    << id << ", your bearing the USN " << usn <<" and you're studying in "
    << branch << " branch under " << section << " section.";
}