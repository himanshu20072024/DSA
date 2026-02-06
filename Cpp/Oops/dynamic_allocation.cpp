#include<iostream>
using namespace std;

class Cricketer
{
    public:
    string name;
    int runs;
    int matches;
    Cricketer(string name, int runs, int matches) 
    {
        this->name = name;
        this->runs = runs;
        this->matches = matches;
    }

    void PrintDetails(int runs)
    {
        cout<<name<<" "<<runs<<matches<<endl; // agar ham this ko specify nhi karenge toh runs ko wo dekhega function ke andar aaya hai toh whi print kar dega
        cout<<this->name<<" "<<this->runs<<this->matches<<endl; // check result
    } 

    int average()
    {
        return runs/matches;
    }
};

void change(Cricketer* C)
{
    //(*C).name = "Virat Kohli"; // both are same
    C->name = "Virat Kohli"; // both are same
}

// -> ye ham pointers ke saath use karte hai jab hamne ptr->runs ye kia toh C1 ke andar jiska address tha uss address ke runs ko change kar dia
// a -> b means (*a).b  and yaha a must be pointer 
int main()
{
    // Cricketer C1("Dhoni", 30000, 247);  // memory allcoated during compile time
    // C1.PrintDetails(234);
    // cout<<C1.runs<<endl; 
    // cout<<C1.average();
    // Cricketer* ptr = &C1;
    // cout<<endl<<(*ptr).name<<endl;
    // (*ptr).matches = 23; // matches changed
    // cout<<(*ptr).matches<<endl; 
    // cout<<ptr->name<<endl; // we can also use C1.name
    // change(&C1);
    // cout<<C1.name;

    Cricketer* ptr = new Cricketer("Dhoni", 30000, 247); // memory allocated in runtime  in heap 
    cout<<ptr -> name<<" "<<ptr -> runs<<" "<<ptr -> matches<<endl;
    (*ptr).PrintDetails(2345);  // this and below lines are same
    ptr -> PrintDetails(2134);
}