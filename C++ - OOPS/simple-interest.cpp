// SI = PTR/100 Rate: int
// SI = PTR*0.01 Rate: float
#include<iostream>
using namespace std;

class SimpleInterest{
int principle, time, rateInInteger;
float rateInDecimal;
public:
    float simpleInterest;
    
    SimpleInterest(){
        principle = 0;
        time = 0;
        rateInInteger = 0;
        rateInDecimal = 0;
        simpleInterest = 0;
    }
    // You can declare the empty Default Constructor for avoiding the error caused by Parameterized Constructor
    // SimpleInterest(){} 
    // Expecting 3 integers as the arguments
    SimpleInterest(int p, int t, int r){
        principle = p;
        time = t;
        rateInInteger = r;
        simpleInterest = (principle*time*rateInInteger)/100;
        cout << "Simple Interest for " << endl;
        cout << "Principle: " << principle << endl;
        cout << "Time: " << time << endl;
        cout << "Rate of Interest: " << rateInInteger << endl;
        cout << "Total Amount: " << simpleInterest + principle << endl;
    }
    // Expecting 2 integers & 1 float as the arguments
    SimpleInterest(int P, int T, float R){
        principle = P;
        time = T;
        rateInDecimal = R;
        simpleInterest = (principle*time*rateInDecimal);
        cout << "Simple Interest for " << endl;
        cout << "Principle: " << principle << endl;
        cout << "Time: " << time << endl;
        cout << "Rate of Interest: " << rateInDecimal << endl;
        cout << "Total Amount: " << simpleInterest + principle << endl;
    }

    //Destructor
    // Syntax:
    // ~ConstructorName(){}
    ~SimpleInterest(){
        cout << "Destructor has been called" << endl;
    };
};

int main(){
    int amount, duration, integerRate;
    float decimalRate;
    SimpleInterest Type1, Type2;
    cout << "Enter the Principle Amount, Duration (In Years):";
    cin >> amount >> duration;
    cout << "Enter the Interest Rate(Ex: 8%): ";
    cin >> integerRate;
    cout << "Enter the Interest Rate(Ex: 0.08): ";
    cin >> decimalRate;
    Type1 = SimpleInterest(amount, duration, integerRate);
    Type2 = SimpleInterest(amount, duration, decimalRate);
}