/*
Date: 13 Dec 2025
Topic: Object and Class
*/

#include <iostream>
using namespace std;

class person
{
public:
    person(string name)
    {
        cout << "Hi, " << name <<"!"<<endl;
    }
    // data member and member function definition
    int age;
    string occupation;
    string hobbies[10];
    bool isMarried;
    void rightNow(string work)
    {
        cout << work << " in Process.........!";
    }
};

int main(int argc, char *argv[])
{

    // object creation
    person pankaj("Pankaj Kumar Ray");

    pankaj.age = 18;
    pankaj.occupation = "Student";
    pankaj.hobbies[0] = "Calligraphy";
    pankaj.hobbies[1] = "Drawing";
    pankaj.hobbies[2] = "Listening Songs";
    pankaj.hobbies[3] = "Watching and Reading Science videos and papers";
    pankaj.hobbies[4] = "Coding";
    pankaj.hobbies[5] = "Song Composition";

    pankaj.isMarried = false;
    pankaj.rightNow("Coding");

        return 0;
}