#include<iostream>
#include<vector>
using namespace std;

class Scooty
{
    public : 
        int topSpeed;
        float mileage;
        
        virtual void sound()
        {
            cout<<"Vroom Vroom"<<endl;
        }
    private : 
        int bootSpace;
};

class Bike : public Scooty
{
    public : 
        int gears;
        void sound()
        {
            cout<<"Droom Droom"<<endl;
        }
};

class superBike : public Scooty
{
    public : 
        int gears;
        void sound()
        {
            cout<<"Zroom Zroom"<<endl;
        }
};

int main()
{
    Bike b1;
    b1.sound();
    Scooty s1;
    s1.sound();
    Bike* b2 = new Bike();
    b2 -> sound();
    Scooty* s2 = new Scooty();
    s2 -> sound();
    Scooty* s3 = new Bike();  // not error because running in run time not in compile time
    s3 -> sound();  // not printing Droom Droom because it is going into scooty and printing its sound because it is pointer to scooty

    // if we have used virtual keyword then it will print bike sound even if we used scooty pointer this concept is known as overriding 
    Scooty* s4 = new Bike();
    s4 -> sound();

    Scooty* s5 = new superBike();
    s5 -> sound();

    Scooty arr[4]; // this virtual keyword is used like this because bike and superbike are derived class of scooty and in array we can only use one datatype so virtual keyword help us to print different sound
    vector<Scooty*> v; // same like above just using vectors
}