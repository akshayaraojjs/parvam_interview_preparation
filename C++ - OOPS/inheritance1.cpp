// Animal -> Dog
#include<iostream>
using namespace std;

class Animal{
    public:
    string foodType, animalType;

    void setAnimalDetails(string food, string type){
        foodType = food;
        animalType = type;
    }

    void showAnimalDetails(){
        cout << "This animal is " << animalType 
        << " and it is a " << foodType << endl;
    }
};

class Dog : public Animal{
    public:
    string dog_food;

    void feedDog(string dogFood){
        dog_food = dogFood;
    }

    void showDogDetails(){
        cout << "As the animal is a " << animalType 
        << ", it eats " << dog_food <<  endl;
    }
};

class Cow : public Animal{
    public:
    string cow_food;

    void feedCow(string cowFood){
        cow_food = cowFood;
    }

    void showCowDetails(){
        cout << "As the animal is a " << animalType 
        << ", it eats " << cow_food <<  endl;
    }
};

int main(){
    string a_food, a_type, d_food, c_food;
    Animal A1;
    Dog D1;
    Cow C1;
    cout << "Enter the Animal Details as follows: " << endl;
    cout << "1. Food Type(Herbivore/Carnivore/Omnivore): " << endl;
    cin >> a_food;
    cout << "2. Animal Type(Wild/Pet Animal): " << endl;
    cin >> a_type;
    cout << "3. Type of Dog Food(Ex: Pedigree): " << endl;
    cin >> d_food;
    cout << "4. Type of Cow Food(Ex: Grass): " << endl;
    cin >> c_food;
    A1.setAnimalDetails(a_food,a_type);
    A1.showAnimalDetails();
    D1.feedDog(d_food);
    D1.animalType = a_type;
    D1.showDogDetails();
    C1.feedCow(c_food);
    C1.animalType = a_type;
    C1.showCowDetails();
}