/* 
constructor ke andar pahle se default constructor hota hai jo "s.name, s.processor"
aise values leta hai but jab ham khud se constructor create kar dete hai toh computer 
default constructir ko remove kar deta hai and agar hame dubara "s.name, s.processor" 
aise values leni hai toh default constructor add karna padega and ham multiple constructor
create kar sakte hai 
 */

#include<iostream>
using namespace std;

class SmartPhone
{
    public:
        string processor;
        int battery;
        string name;
        int storage;
        SmartPhone(string n, string p, int b, int s) // parameterized constructor
        {
            name = n;
            processor = p;
            battery = b;
            storage = s;
        }
        SmartPhone() // default constructor --> ye agar ham uper wala constructor nhi banainge toh ye default pahle se bana hota hai agar hamne uper wala constructor bana dia toh ye wala hat jata hai and fir agar hame s.name aise input karna hai toh default constructor ko dubara se add karna padega 
        {

        }
        SmartPhone(int b, int s) // multiple constructors can be created 
        {
            battery = b;
            storage = s;
        }
};

void PrintDetails(SmartPhone& S)
{
    cout<<S.name<<" "<<S.processor<<" "<<S.battery<<" "<<S.storage<<endl;
}

int main()
{
    SmartPhone S1("OnePlus Nord 3", "Snapdragon 9100+ ", 5000, 128);

    SmartPhone S2("i Phone 17", "Bionic 18 chip ", 10, 03);

    SmartPhone S3;  
    S3.name = "Edge 50 fusion";
    S3.processor = "mast processor";

    SmartPhone S4 = S1; // Deep Copy
    S4.name = "Nalla Phone";

    SmartPhone S5(S1); // Copy constructor --> deep copy
    S5.processor = "Sabse Bekar"; // S1 me change nhi aaya S5 hi change hua means deep copy

    SmartPhone S6(2100, 30);

    PrintDetails(S1);
    PrintDetails(S2);
    PrintDetails(S3);
    PrintDetails(S4);
    PrintDetails(S5);
    PrintDetails(S6);
}