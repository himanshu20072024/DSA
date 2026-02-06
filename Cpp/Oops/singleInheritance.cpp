#include<iostream>
using namespace std;

class Vehicle // parent class
{
    public :
        int topSpeed;
        int milage;
        void display()  // without receiving anything
        {
            cout<<topSpeed<<" "<<milage<<" ";
        }
    protected :
        string type;
};

class twoWheeler : public Vehicle // child class / derived class  
{
    public :
        int name;
        void display()  // without receiving anything
        {
            cout<<topSpeed<<" "<<milage<<" ";
        }
};

int main()
{
    Vehicle V1;
    V1.milage = 200;
    twoWheeler T1;
    T1.milage = 300;
    T1.topSpeed = 789;
    T1.display();  // it can work like this without passing anything in function
    V1.display();
    
    
}