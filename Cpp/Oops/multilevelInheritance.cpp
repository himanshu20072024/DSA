#include<iostream>
using namespace std;

class Vehicle
{
    public :
        int topSpeed;
        int mileage;
        string fuel;
};

class twoWheeler : public Vehicle  // chile class / derived class
{
    public:
        
};

class fourWheeler : public Vehicle
{
    public : 
        
};

class Bike : public twoWheeler
{
    public :
        
};

class Car : public fourWheeler
{
    public :
        void display()
        {
            cout<<topSpeed<<" "<<fuel<<" "<<mileage<<" ";
        }
};

int main()
{
    Vehicle v1;
    v1.topSpeed = 100;
    Car c1;
    c1.fuel = "diesel";
    c1.mileage = 345;
    c1.display();

}