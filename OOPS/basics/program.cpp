/*
Date: 13 Dec 2025
Topic: Object and Class
*/

#include <iostream>
using namespace std;

class person
{
public:
    //* parameterized constructor
    person(string name)
    {
        cout << "Hi, " << name << "!" << endl;
    }

    // data member
    int age;
    string occupation;
    string hobbies[10];
    bool isMarried;

    // member function (method)
    void rightNow(string work)
    {
        cout << work << " in Process.........!";
    }
};

int main(int argc, char *argv[])
{

    //* object creation - parametrized constructor
    person pankaj("Pankaj Kumar Ray");

    //* assigning value to object
    pankaj.age = 18;
    pankaj.occupation = "Student";
    pankaj.isMarried = false;

    pankaj.rightNow("Coding");

    //* manual way
    /*
    ? old method
    pankaj.hobbies[0] = "Calligraphy";
    pankaj.hobbies[1] = "Drawing";
    pankaj.hobbies[2] = "Listening Songs";
    pankaj.hobbies[3] = "Watching and Reading Science videos and papers";
    pankaj.hobbies[4] = "Coding";
    pankaj.hobbies[5] = "Song Composition";
    */

    //* advance approach -  loop and array
    string hobbys[6] = {"Calligraphy", "Drawing", "Listening Songs", "Watching and Reading Science videos and papers", "Coding", "Song Composition"};

    //* passing value
    for(int i=0;i<6;i++){
        
        pankaj.hobbies[i]=hobbys[i];
    }
    //* printing the value
    for(int i=0;i<6;i++){
        
        cout<<pankaj.hobbies[i]<<endl;
    }

    

    return 0;
}