#include<iostream>
using namespace std;


class company{
    float age;
    char name[30];
    public:
        int getData(void);
        int showData(void);
};


int company::getData(void){
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the Age: ";
    cin>>age;
    return 0;
}

int company::showData(void){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    return 0;
}

int main()
{

    int no;

    cout<<"Enter the no. of Employee: ";
    cin>>no;

    company emp[no];



    cout<<"----------------------------------------"<<endl;
    cout<<"Enter the data"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0;i<no;i++)
    {
        emp[i].getData();
    }

    cout<<"----------------------------------------"<<endl;
    cout<<"The saved data are:"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0;i<no;i++)
    {
        cout<<"Employee "<<i+1<<": \n";
        emp[i].showData();
    }
    return 0;
}