#include<iostream>
using namespace std;

class Clasher
{
    public :
        int townhall;
        int Ids;
        string League;
};

class bgmiPlayer
{
    public :
        string bgmiName;
        int level;
        string highestTier;
};

class Engineer
{
    public : 
        string experience;
        string domain;
};

class brothers : public Clasher,public bgmiPlayer,public Engineer
{
    public : 
        string name;
        void print()
        {
            cout<<"Clash of Clans details :"<<endl;
            cout<<"    "<<"Townhall Level : "<<townhall<<endl<<"    Number of Ids : "<<Ids<<endl<<"    Highest League : "<<League<<endl;
            cout<<"PUBG Details : "<<endl;
            cout<<"    BGMI name : "<<bgmiName<<endl<<"    Level : "<<level<<endl<<"    Highest Tier : "<<highestTier<<endl;
            cout<<"Engineer Details : "<<endl;
            cout<<"    Experience : "<<experience<<endl<<"    Domain : "<<domain<<endl;
        }
};

int main()
{
    brothers* b1 = new brothers();
    b1 -> name = "Himanshu";
    b1 -> bgmiName = "Ideal";
    b1 -> domain = "Chemical Engineering";
    b1 -> experience = "10 years";
    b1 -> highestTier = "Conqueror";
    b1 -> Ids = 37;
    b1 -> League = "Legend League";
    b1 -> level = 295;
    b1 -> townhall = 17;
    b1 -> print();
    
}