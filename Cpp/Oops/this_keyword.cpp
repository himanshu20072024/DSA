#include<iostream>
using namespace std;

class Cricketer
{
    public:
    string name;
    int runs;
    Cricketer(string name, int runs) // using this we have specified in which name we are copying name if we will not use this then we cannot use same name and same runs as name we have to use something different
    {
        this->name = name; 
        this->runs = runs;
    }
};

void PrintDetails(Cricketer& S)
{
    cout<<S.name<<" "<<S.runs<<endl;
}

int main()
{
    Cricketer C1("Dhoni", 30000);
    PrintDetails(C1);
}