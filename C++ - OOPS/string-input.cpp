#include<iostream>
using namespace std;

int main(){
    string skills[5], tech[5];
    cout << "Enter the Skillset: "<< endl;
    for(int i=0; i<5; i++){
        cin >> skills[i];
    }
    // tech[5] = skills[5];
    cout << "The Skillsets are: "<< endl;
    for(int i=0; i<5; i++){
        cout << skills[i] << endl;
    }

}