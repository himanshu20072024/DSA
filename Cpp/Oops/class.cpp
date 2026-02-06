#include<iostream>
using namespace std;

class SmartPhone
{
    public:
    string name;
    string processor;
    int battery;
    int storage;
};

void Change(SmartPhone S)
{
    S.name = "Laptop";
}

void InputDetails(SmartPhone& S)
{
    cout<<"Enter name of smartphone : ";
    getline(cin, S.name);
    cout<<"Enter processor name : ";
    getline(cin, S.processor);
    cout<<"Enter battery size : ";
    cin>>S.battery;
    cout<<"Enter storage  : ";
    cin>>S.storage; 

    cin.ignore();  // clear newline from input buffer for next getline call
}

void PrintDetails(SmartPhone& S)
{
    cout<<S.name<<" "<<S.processor<<" "<<S.battery<<" "<<S.storage<<endl;
}

int main()
{
    SmartPhone S1, S2;
    InputDetails(S1); // passed by reference because function parameter is SmartPhone& 
    Change(S1);
    //InputDetails(S2);
    PrintDetails(S1);
    //PrintDetails(S2);

}