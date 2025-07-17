#include<iostream> //Header File for using std::cin & std::cout
int main(){
    int age;
    float weight;
    std::string name;
    char grade;

    std::cout << "Enter your age:";
    std::cin >> age;
    std::cout << "Enter your weight(in Kgs):";
    std::cin >> weight;
    std::cout << "Enter your Name:";
    std::cin >> name;
    std::cout << "Enter your grade:";
    std::cin >> grade;

    std::cout<<"Your name is " << name << 
            ". You're " << age << " years old." << "Your weight is about "
            << weight << " Kgs. And you've scored " << grade << " grade.";
}