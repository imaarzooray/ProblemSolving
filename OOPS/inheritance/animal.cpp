#include <iostream>
using namespace std;

// base class or parent class
class Animal
{
    // access modifier or specifier
public:
    // default constructor - with no argument
    Animal()
    {
        cout << "I am Animal!" << endl;
    }
    
    /*
    * data member - properties
    ? ------------------------
    */

    //? scientific name
    string scientificName;

    //? legs
    int noOfLegs;

    //? tail
    int noOfTails;

    //? wings
    int noOfWings;

    //? weight
    double weight;

    //? horn
    bool haveHorn;

    //? mammal ?
    bool isMammal;

    //? herbivorous or omnivorous or carnivorous
    string foodType[3] = {"herbivorous","carnivorous","omnivorous"};

    //? land, water or both
    string shelterType[3] = {"land","water","both"};


    /* 
    * member function - method
    ? ------------------------
    */
   string action(string act){

    cout<<scientificName<<" "<<act;
   }
};

class Dolphin : public Animal
{
};

class Camel : public Animal
{
};

int main(int *argc, char *argv[])
{

    return 0;
}